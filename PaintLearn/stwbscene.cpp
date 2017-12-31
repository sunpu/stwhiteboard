#include "stwbscene.h"

using namespace tahiti;

STWBScene::STWBScene(QObject *parent)
	:QGraphicsScene(parent)
{
	m_isDrawing = false;
}

void STWBScene::setMode(STWBActionType type)
{
	m_type = type;
}

void STWBScene::setPenColor(QColor color)
{
	m_pen_color = color;
}

void STWBScene::setPenThickness(int w)
{
	m_pen_thickness = w;
}

void STWBScene::setTextColor(QColor color)
{
	m_text_color = color;
}

void STWBScene::setTextSize(int size)
{
	m_text_size = size;
}

void STWBScene::drawStart(PathItemData *dt)
{
	double x = dt->prePoint.x() - (double(m_pen_thickness) / 2.f);
	double y = dt->prePoint.y() - (double(m_pen_thickness) / 2.f);

	QGraphicsEllipseItem* el = addEllipse(QRect(x, y, m_pen_thickness, m_pen_thickness),
		QPen(m_pen_color, 1), QBrush(m_pen_color));

	dt->tempDrawingItem.push_back(el);
}

void STWBScene::drawTo(PathItemData *dt, const QPointF &to)
{
	QGraphicsLineItem* li = addLine(dt->prePoint.x(), dt->prePoint.y(), to.x(), to.y(),
		QPen(QBrush(m_pen_color), m_pen_thickness, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

	dt->tempDrawingItem.push_back(li);
}

void STWBScene::onPenDown(QPointF pt, int id)
{
	m_pathItemData = new PathItemData;
	m_pathItemData->prePoint = pt;//scene point;
	m_pathItemData->pathItem = new STWBPathItem;
	m_pathItemData->pathItem->addPoint(pt);

	drawStart(m_pathItemData);

}

void STWBScene::onPenMove(QPointF pt, int id)
{
	QPointF to = pt;

	if (m_pathItemData->pathItem)
	{
		m_pathItemData->pathItem->addPoint(to);
	}

	drawTo(m_pathItemData, to);
	m_pathItemData->prePoint = to;
}

void STWBScene::onPenUp(int id)
{
	for (size_t i = 0; i < m_pathItemData->tempDrawingItem.size(); i++)
	{
		QGraphicsScene::removeItem(m_pathItemData->tempDrawingItem[i]);
	}

	m_pathItemData->tempDrawingItem.clear();
	m_pathItemData->pathItem->setColor(m_pen_color);
	m_pathItemData->pathItem->setThickness(m_pen_thickness);
	m_pathItemData->pathItem->render();
	QGraphicsScene::addItem(m_pathItemData->pathItem);
}

void STWBScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_type == STWBActionType::Pen)
	{
		m_isDrawing = true;
		onPenDown(event->scenePos());
	}
	else if (m_type == STWBActionType::Text)
	{
		m_textItem = new STWBTextItem;
		m_textItem->setDefaultTextColor(m_text_color);
		m_textItem->setPlainText(QString::fromLocal8Bit(""));
		QFont font = m_textItem->font();
		font.setPixelSize(m_text_size);
		m_textItem->setFont(font);
		m_textItem->setSelected(true);
		m_textItem->setFocus();
		m_textItem->setPos(event->scenePos());
		QGraphicsScene::addItem(m_textItem);
	}
	else if (m_type == STWBActionType::Select)
	{
		QGraphicsScene::mousePressEvent(event);
	}
	else
	{
		return;
	}
}

void STWBScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_isDrawing)
	{
		onPenMove(event->scenePos());
	}
	QGraphicsScene::mouseMoveEvent(event);
}

void STWBScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_isDrawing)
	{
		m_isDrawing = false;
		onPenUp();
	}
	QGraphicsScene::mouseReleaseEvent(event);
}

void STWBScene::keyPressEvent(QKeyEvent *event)
{
	if (event->key() == Qt::Key_Delete)
	{
		deleteSlectedItem();
	}
	else
	{
		QGraphicsScene::keyPressEvent(event);
	}
}

void STWBScene::deleteSlectedItem()
{
	// 移除所有选中的 items
	while (!selectedItems().isEmpty())
	{
		removeItem(selectedItems().front());
	}
}
