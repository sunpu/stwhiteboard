#ifndef STWHITEBOARDPATHITEM_H
#define STWHITEBOARDPATHITEM_H

#include <QGraphicsPathItem>
#include <vector>
#include <QPointF>
#include "stwhiteboardconst.h"

namespace tahiti
{
	class STWhiteBoardPathItem : public QGraphicsPathItem
	{
	public:
		STWhiteBoardPathItem(QGraphicsItem* parent = 0);

		void setColor(QColor color);
		void setThickness(int thickcness);

		QColor color() { return m_color; }
		int thickness() { return m_thickness; }

		void render(void);
		std::vector<QPointF> points(void) { return m_listPoints; }
		void addPoint(const QPointF& pt)
		{
			m_listPoints.push_back(pt);
		}
	private:
		std::vector<QPointF> m_listPoints;
		QColor m_color;
		int m_thickness;
		STWhiteBoardActionType m_type;
	};
}
#endif
