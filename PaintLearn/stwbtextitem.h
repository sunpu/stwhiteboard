#ifndef STWBTEXTITEM_H
#define STWBTEXTITEM_H

#include <QGraphicsTextItem>
#include <vector>
#include <QPointF>
#include <QFont>
#include "stwbconst.h"

namespace tahiti
{
	class STWBTextItem : public QGraphicsTextItem
	{
	public:
		STWBTextItem(QGraphicsItem* parent = 0);
	protected:
		void focusOutEvent(QFocusEvent * event);
		void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
	private:
		STWBActionType m_type;
	};
}
#endif
