#include "stwbtextitem.h"
#include <QUuid>
#include <QBrush>
#include <QPen>

using namespace tahiti;

STWBTextItem::STWBTextItem(int itemID)
	:m_itemID(itemID)
{
	setFlags(QGraphicsItem::ItemIsMovable |
		QGraphicsItem::ItemIsFocusable |
		QGraphicsItem::ItemIsSelectable);
	setTextInteractionFlags(Qt::TextEditorInteraction);
}

void STWBTextItem::focusOutEvent(QFocusEvent* event)
{
	setTextInteractionFlags(Qt::NoTextInteraction);
}

void STWBTextItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event)
{
	setTextInteractionFlags(Qt::TextEditorInteraction);
	setFocus();
}
