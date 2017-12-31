#ifndef STWBPATHITEM_H
#define STWBPATHITEM_H

#include <QGraphicsPathItem>
#include <vector>
#include <QPointF>
#include "stwbconst.h"

namespace tahiti
{
	class STWBPathItem : public QGraphicsPathItem
	{
	public:
		STWBPathItem(QGraphicsItem* parent = 0);

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
		STWBActionType m_type;
	};
}
#endif
