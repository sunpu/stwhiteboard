#include "stwhiteboarditem.h"
#include <QUuid>
#include <QBrush>
#include <QPen>

using namespace tahiti;

STWhiteBoardPathItem::STWhiteBoardPathItem(QGraphicsItem *parent)
	:QGraphicsPathItem(parent)
{
	setFlag(QGraphicsItem::ItemIsMovable, true);
	setFlag(QGraphicsItem::ItemIsSelectable, true);
}

void STWhiteBoardPathItem::setColor(QColor color)
{
	m_color = color;
}

void STWhiteBoardPathItem::setThickness(int thickcness)
{
	m_thickness = thickcness;
}

void STWhiteBoardPathItem::render()
{
	if (m_listPoints.size() < 1) return;

	QPainterPath path;
	path.moveTo(m_listPoints[0]);
	for (size_t i = 1; i < m_listPoints.size(); i++)
	{
		path.lineTo(m_listPoints[i]);
	}

	this->setPen(QPen(QBrush(color()), (qreal)thickness(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
	this->setPath(path);
}
