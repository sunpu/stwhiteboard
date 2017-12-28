#ifndef STWHITEBOARDTEXTITEM_H
#define STWHITEBOARDTEXTITEM_H

#include <QGraphicsTextItem>
#include <vector>
#include <QPointF>
#include <QFont>
#include "stwhiteboardconst.h"

namespace tahiti
{
	class STWhiteBoardTextItem : public QGraphicsTextItem
	{
	public:
		STWhiteBoardTextItem(QGraphicsItem* parent = 0);
	private:
		STWhiteBoardActionType m_type;
	};
}
#endif
