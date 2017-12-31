#include "stwbview.h"
#include "stwbscene.h"

#include <QTouchEvent>
#include <QEvent>

using namespace tahiti;

STWBView::STWBView(QWidget *parent)
	: QGraphicsView(parent)
{
	setInteractive(true);
	setOptimizationFlag(QGraphicsView::IndirectPainting);
	setCacheMode(QGraphicsView::CacheBackground);

	//antialiasing
	//setRenderHint(QPainter::HighQualityAntialiasing, true);
	setRenderHint(QPainter::Antialiasing, true);

	setStyleSheet("background: transparent;border:0px");

	//init scene
	m_scene = new STWBScene;
	setScene(m_scene);
	setSceneRect(0, 0, 600, 600);
	resize(600, 600);
}

STWBView::~STWBView()
{

}

void STWBView::setPenColor(QColor color)
{
	m_scene->setPenColor(color);
}

void STWBView::setPenThickness(int width)
{
	m_scene->setPenThickness(width);
}

void STWBView::setTextColor(QColor color)
{
	m_scene->setTextColor(color);
}

void STWBView::setTextSize(int size)
{
	m_scene->setTextSize(size);
}

void STWBView::setMode(STWBActionType type)
{
	m_scene->setMode(type);
}

void STWBView::resizeEvent(QResizeEvent *event)
{
	Q_UNUSED(event);
	setSceneRect(0, 0, width(), height());
	centerOn(width() / 2, height() / 2);
}

void STWBView::setScene(STWBScene *scene)
{
	QGraphicsView::setScene(scene);
	m_scene = scene;
}

void STWBView::deleteSlectedItem()
{
	m_scene->deleteSlectedItem();
}

void STWBView::clearSelection()
{
	m_scene->clearSelection();
}
