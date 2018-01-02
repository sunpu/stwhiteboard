#include "stwbscene.h"

using namespace tahiti;

STWBScene::STWBScene(STWBNetworkClient* network)
	: m_network(network)
{
	m_isDrawing = false;

	m_pathItemData = NULL;
	m_textItem = NULL;
	m_last_textItem = NULL;

	m_itemID_index = 0;
	//connect(m_network, SIGNAL(drawPenItem(QString, int, QVector<QPoint>)),
	//	this, SLOT(drawRemotePenItem(QString, int, QVector<QPoint>)));
	//connect(m_network, SIGNAL(drawPenItem1()), this, SLOT(drawRemotePenItem1()));
}

void STWBScene::setMode(STWBActionType type)
{
	m_type = type;
}

void STWBScene::setPenColor(QString color)
{
	m_pen_color = color;
}

void STWBScene::setPenThickness(int w)
{
	m_pen_thickness = w;
}

void STWBScene::setTextColor(QString color)
{
	m_text_color = color;
}

void STWBScene::setTextSize(int size)
{
	m_text_size = size;
}

void STWBScene::drawStart(PathItemData *dt)
{
	double x = dt->prePoint.x() - (double(m_pen_thickness) / 2.f);
	double y = dt->prePoint.y() - (double(m_pen_thickness) / 2.f);

	QGraphicsEllipseItem* el = addEllipse(QRect(x, y, m_pen_thickness, m_pen_thickness),
		QPen(QColor(m_pen_color), 1), QBrush(QColor(m_pen_color)));

	dt->tempDrawingItem.push_back(el);
}

void STWBScene::drawTo(PathItemData *dt, const QPoint &to)
{
	QGraphicsLineItem* li = addLine(dt->prePoint.x(), dt->prePoint.y(), to.x(), to.y(),
		QPen(QBrush(QColor(m_pen_color)), m_pen_thickness, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

	dt->tempDrawingItem.push_back(li);
}

void STWBScene::onPenDown(QPoint pt, int id)
{
	m_pathItemData = new PathItemData;
	m_pathItemData->prePoint = pt;//scene point;
	m_pathItemData->pathItem = new STWBPathItem(m_itemID_index++);
	m_pathItemData->pathItem->addPoint(pt);

	drawStart(m_pathItemData);
}

void STWBScene::onPenMove(QPoint pt, int id)
{
	QPoint to = pt;

	if (m_pathItemData->pathItem)
	{
		m_pathItemData->pathItem->addPoint(to);
	}

	drawTo(m_pathItemData, to);
	m_pathItemData->prePoint = to;
}

void STWBScene::onPenUp(int id)
{
	for (size_t i = 0; i < m_pathItemData->tempDrawingItem.size(); i++)
	{
		QGraphicsScene::removeItem(m_pathItemData->tempDrawingItem[i]);
	}

	m_pathItemData->tempDrawingItem.clear();
	m_pathItemData->pathItem->setColor(m_pen_color);
	m_pathItemData->pathItem->setThickness(m_pen_thickness);
	m_pathItemData->pathItem->render();
	QGraphicsScene::addItem(m_pathItemData->pathItem);

	m_network->drawPenItem(m_pathItemData->pathItem->itemID(),
		m_pen_color, m_pen_thickness, m_pathItemData->pathItem->points());
}

void STWBScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_type == STWBActionType::Pen)
	{
		m_isDrawing = true;
		onPenDown(event->scenePos().toPoint());
	}
	else if (m_type == STWBActionType::Text)
	{
		if (m_textItem != NULL)
		{
			m_last_textItem = m_textItem;
			m_last_textItem->setTextInteractionFlags(Qt::NoTextInteraction);
			m_last_textItem->setSelected(false);
			if (m_last_textItem->toPlainText().length() == 0)
			{
				QGraphicsScene::removeItem(m_last_textItem);
				m_last_textItem = NULL;
			}
		}
		m_textItem = new STWBTextItem(m_itemID_index++);
		connect(m_textItem, SIGNAL(removeMe()), this, SLOT(removeEmptyTextItem()));
		m_textItem->setDefaultTextColor(m_text_color);
		m_textItem->setPlainText(QString::fromLocal8Bit(""));
		QFont font = m_textItem->font();
		font.setPixelSize(m_text_size);
		m_textItem->setFont(font);
		m_textItem->setSelected(true);
		m_textItem->setFocus();
		m_textItem->setPos(event->scenePos().toPoint());
		QGraphicsScene::addItem(m_textItem);
	}
	else if (m_type == STWBActionType::Select)
	{
		QGraphicsScene::mousePressEvent(event);
	}
	else
	{
		return;
	}
}

void STWBScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_isDrawing)
	{
		onPenMove(event->scenePos().toPoint());
	}
	QGraphicsScene::mouseMoveEvent(event);
}

void STWBScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_isDrawing)
	{
		m_isDrawing = false;
		onPenUp();
	}
	QGraphicsScene::mouseReleaseEvent(event);
}

void STWBScene::keyPressEvent(QKeyEvent *event)
{
	if (event->key() == Qt::Key_Delete)
	{
		deleteSelectedItem();
	}
	else
	{
		QGraphicsScene::keyPressEvent(event);
	}
}

void STWBScene::deleteSelectedItem()
{
	// 移除所有选中的 items
	while (!selectedItems().isEmpty())
	{
		removeItem(selectedItems().front());
	}
}
void STWBScene::clearStatus()
{
	clearSelection();
	removeEmptyTextItem();
}

void STWBScene::removeEmptyTextItem()
{
	if (m_textItem != NULL && m_textItem->toPlainText().length() == 0)
	{
		QGraphicsScene::removeItem(m_textItem);
		m_textItem = NULL;
	}
}

void STWBScene::drawRemotePenItem(QString color, int thickness, QVector<QPoint> points)
{
	m_remotePathItem = new STWBPathItem(m_itemID_index++);
	m_remotePathItem->setColor(color);
	m_remotePathItem->setThickness(thickness);
	for (int i = 0; i < points.size(); i++)
	{
		m_remotePathItem->addPoint(points[i]);
	}
	m_remotePathItem->render();
	QGraphicsScene::addItem(m_remotePathItem);
}

void STWBScene::drawRemotePenItem1()
{
	printf("123");
}