#include "stwhiteboardview.h"
#include "stwhiteboardscene.h"

#include <QTouchEvent>
#include <QEvent>

using namespace tahiti;

STWhiteBoardView::STWhiteBoardView(QWidget *parent)
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
	m_scene = new STWhiteBoardScene;
	setScene(m_scene);
	setSceneRect(0, 0, 600, 600);
	resize(600, 600);
}

STWhiteBoardView::~STWhiteBoardView()
{

}

void STWhiteBoardView::setPenColor(QColor color)
{
	m_scene->setPenColor(color);
}

void STWhiteBoardView::setPenThickness(int width)
{
	m_scene->setPenThickness(width);
}

void STWhiteBoardView::setTxtColor(QColor color)
{
	m_scene->setTxtColor(color);
}

void STWhiteBoardView::setTxtSize(int size)
{
	m_scene->setTxtSize(size);
}

void STWhiteBoardView::setMode(STWhiteBoardActionType type)
{
	m_scene->setMode(type);
}

void STWhiteBoardView::resizeEvent(QResizeEvent *event)
{
	Q_UNUSED(event);
	setSceneRect(0, 0, width(), height());
	centerOn(width() / 2, height() / 2);
}

void STWhiteBoardView::setScene(STWhiteBoardScene *scene)
{
	QGraphicsView::setScene(scene);
	m_scene = scene;
}

void STWhiteBoardView::deleteSlectedItem()
{
	m_scene->deleteSlectedItem();
}

void STWhiteBoardView::clearSelection()
{
	m_scene->clearSelection();
}