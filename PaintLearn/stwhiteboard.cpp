#include "stwhiteboard.h"

using namespace tahiti;

STWhiteBoard::STWhiteBoard(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	qRegisterMetaType<QVector<QPoint>>("QVector<QPoint>");
	qRegisterMetaType<QPoint>("QPoint");
	qRegisterMetaType<QList<int>>("QList<int>");

	m_network = new STWBNetworkClient();
	connect(m_network, SIGNAL(onConnect()), this, SLOT(connectNetworkServer()));
	connect(m_network, SIGNAL(drawRemoteRealtimePen(QString, int, QVector<QPoint>)),
		this, SLOT(drawRemoteRealtimePen(QString, int, QVector<QPoint>)));
	connect(m_network, SIGNAL(drawRemotePenItem(QString, int, QVector<QPoint>, int)),
		this, SLOT(drawRemotePenItem(QString, int, QVector<QPoint>, int)));
	connect(m_network, SIGNAL(drawRemoteTextItem(QString, int, QString, QPoint, int)),
		this, SLOT(drawRemoteTextItem(QString, int, QString, QPoint, int)));
	connect(m_network, SIGNAL(moveRemoteItems(QPoint, int)), this, SLOT(moveRemoteItems(QPoint, int)));
	connect(m_network, SIGNAL(deleteRemoteItems(QList<int>)), this, SLOT(deleteRemoteItems(QList<int>)));
	connect(m_network, SIGNAL(editableAuthority()), this, SLOT(editableAuthority()));	

	m_network->connectServer("10.1.0.10", "10001");

	m_view = new STWBView(m_network);
	ui.centralWidget->layout()->addWidget(m_view);
	ui.centralWidget->installEventFilter(this);

	m_vtoolbar = new STWBVToolbar(this);
	int toolbarX = 10;
	int toolbarY = geometry().height() / 2 - m_vtoolbar->height() / 2;
	m_vtoolbar->show();
	m_vtoolbar->move(QPoint(toolbarX, toolbarY));

	m_penStylePanel = new STWBPenStylePanel(this);
	m_penStylePanel->hide();
	m_penStylePanel->move(QPoint(toolbarX + m_vtoolbar->width(), toolbarY));

	m_textStylePanel = new STWBTextStylePanel(this);
	m_textStylePanel->hide();
	m_textStylePanel->move(QPoint(toolbarX + m_vtoolbar->width(), toolbarY + 52));

	connect(m_penStylePanel, SIGNAL(updatePenThickness(int)), this, SLOT(setPenThickness(int)));
	connect(m_penStylePanel, SIGNAL(updatePenColor(QString)), this, SLOT(setPenColor(QString)));
	connect(m_textStylePanel, SIGNAL(updateTextSize(int)), this, SLOT(setTextSize(int)));
	connect(m_textStylePanel, SIGNAL(updateTextColor(QString)), this, SLOT(setTextColor(QString)));
	connect(m_vtoolbar, SIGNAL(setActionMode(int)), this, SLOT(setActionMode(int)));
	connect(m_vtoolbar, SIGNAL(deleteAction()), this, SLOT(deleteAction()));
	connect(m_vtoolbar, SIGNAL(hideStylePanels()), this, SLOT(hideStylePanels()));
	connect(m_vtoolbar, SIGNAL(showPenStylePanel()), this, SLOT(showPenStylePanel()));
	connect(m_vtoolbar, SIGNAL(showTextStylePanel()), this, SLOT(showTextStylePanel()));

	m_penStylePanel->init();
	m_textStylePanel->init();
	m_vtoolbar->init();
}

STWhiteBoard::~STWhiteBoard()
{
	m_network->disconnectServer();
}

void STWhiteBoard::connectNetworkServer()
{
	m_network->createClient("teacher");
	m_network->createCourse("course-1");
	m_network->joinCourse("course-1");
}

void STWhiteBoard::hideStylePanels()
{
	m_penStylePanel->hide();
	m_textStylePanel->hide();
}

void STWhiteBoard::showPenStylePanel()
{
	m_penStylePanel->show();
	m_textStylePanel->hide();
}

void STWhiteBoard::showTextStylePanel()
{
	m_penStylePanel->hide();
	m_textStylePanel->show();
}

void STWhiteBoard::setActionMode(int mode)
{
	m_view->clearSelection();
	m_view->setMode((STWBActionType)mode);
	if (mode == STWBActionType::Select)
	{
		m_view->setDragMode(QGraphicsView::RubberBandDrag);
	}
	else
	{
		m_view->setDragMode(QGraphicsView::NoDrag);
	}
}

void STWhiteBoard::deleteAction()
{
	m_view->deleteSelectedItem();
}

void STWhiteBoard::setPenThickness(int thickness)
{
	m_view->setPenThickness(thickness);
	hideStylePanels();
	if (m_vtoolbar->getCurrentSelect() != 2)
	{
		m_vtoolbar->on_pbPen_clicked();
	}
}

void STWhiteBoard::setPenColor(QString color)
{
	m_view->setPenColor(color);
	m_vtoolbar->changePenShowColor(color);
	hideStylePanels();
	if (m_vtoolbar->getCurrentSelect() != 2)
	{
		m_vtoolbar->on_pbPen_clicked();
	}
}

void STWhiteBoard::setTextSize(int size)
{
	m_view->setTextSize(size);
	hideStylePanels();
	if (m_vtoolbar->getCurrentSelect() != 3)
	{
		m_vtoolbar->on_pbText_clicked();
	}
}

void STWhiteBoard::setTextColor(QString color)
{
	m_view->setTextColor(color);
	m_vtoolbar->changeTextShowColor(color);
	hideStylePanels();
	if (m_vtoolbar->getCurrentSelect() != 3)
	{
		m_vtoolbar->on_pbText_clicked();
	}
}

bool STWhiteBoard::eventFilter(QObject* watched, QEvent* e)
{
	if (watched == ui.centralWidget && e->type() == QEvent::Enter)
	{
		hideStylePanels();
	}
	return QWidget::eventFilter(watched, e);
}

void STWhiteBoard::resizeEvent(QResizeEvent* size)
{
	int toolbarX = 10;
	int toolbarY = geometry().height() / 2 - m_vtoolbar->height() / 2;
	m_vtoolbar->show();
	m_vtoolbar->move(QPoint(toolbarX, toolbarY));
	m_penStylePanel->move(QPoint(toolbarX + m_vtoolbar->width(), toolbarY));
	m_textStylePanel->move(QPoint(toolbarX + m_vtoolbar->width(), toolbarY + 52));
}

void STWhiteBoard::drawRemoteRealtimePen(QString color, int thickness, QVector<QPoint> points)
{
	setPenColor(color);
	setPenThickness(thickness);
	m_view->drawRemoteRealtimePen(color, thickness, points);
}

void STWhiteBoard::drawRemotePenItem(QString color, int thickness, QVector<QPoint> points, int itemID)
{
	setPenColor(color);
	setPenThickness(thickness);
	m_view->drawRemotePenItem(color, thickness, points, itemID);
}

void STWhiteBoard::drawRemoteTextItem(QString color, int size, QString content, QPoint pos, int itemID)
{
	setTextColor(color);
	setTextSize(size);
	m_view->drawRemoteTextItem(color, size, content, pos, itemID);
}

void STWhiteBoard::moveRemoteItems(QPoint pos, int itemID)
{
	m_view->moveRemoteItems(pos, itemID);
}

void STWhiteBoard::deleteRemoteItems(QList<int> itemIDs)
{
	m_view->deleteRemoteItems(itemIDs);
}

void STWhiteBoard::editableAuthority(QString editable)
{
	m_vtoolbar->init();
	if (editable == "True")
	{
		m_penStylePanel->show();
		m_textStylePanel->show();
		m_vtoolbar->show();
	}
	else
	{
		m_penStylePanel->hide();
		m_textStylePanel->hide();
		m_vtoolbar->hide();
	}
}
