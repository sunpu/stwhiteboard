#include "stwhiteboardtextitem.h"
#include <QUuid>
#include <QBrush>
#include <QPen>

using namespace tahiti;

STWhiteBoardTextItem::STWhiteBoardTextItem(QGraphicsItem *parent)
	:QGraphicsTextItem(parent)
{
	setTextInteractionFlags(Qt::TextEditorInteraction); //NoTextInteraction
	setFlag(QGraphicsItem::ItemIsMovable, true);
	setFlag(QGraphicsItem::ItemIsSelectable, true);
}
