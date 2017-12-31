#include "stwbpathitem.h"
#include <QUuid>
#include <QBrush>
#include <QPen>

using namespace tahiti;

STWBPathItem::STWBPathItem(QGraphicsItem *parent)
	:QGraphicsPathItem(parent)
{
	setFlag(QGraphicsItem::ItemIsMovable, true);
	setFlag(QGraphicsItem::ItemIsSelectable, true);
}

void STWBPathItem::setColor(QColor color)
{
	m_color = color;
}

void STWBPathItem::setThickness(int thickcness)
{
	m_thickness = thickcness;
}

void STWBPathItem::render()
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