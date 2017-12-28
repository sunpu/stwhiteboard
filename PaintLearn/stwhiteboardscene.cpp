#include "stwhiteboardscene.h"

using namespace tahiti;

STWhiteBoardScene::STWhiteBoardScene(QObject *parent)
	:QGraphicsScene(parent)
{
	m_isDrawing = false;
}

void STWhiteBoardScene::setMode(STWhiteBoardActionType type)
{
	m_type = type;
}

void STWhiteBoardScene::setPenColor(QColor color)
{
	m_pen_color = color;
}

void STWhiteBoardScene::setPenThickness(int w)
{
	m_pen_thickness = w;
}

void STWhiteBoardScene::setTxtColor(QColor color)
{
	m_txt_color = color;
}

void STWhiteBoardScene::setTxtSize(int size)
{
	m_txt_size = size;
}

void STWhiteBoardScene::drawStart(PathItemData *dt)
{
	double x = dt->prePoint.x() - (double(m_pen_thickness) / 2.f);
	double y = dt->prePoint.y() - (double(m_pen_thickness) / 2.f);

	QGraphicsEllipseItem* el = addEllipse(QRect(x, y, m_pen_thickness, m_pen_thickness),
		QPen(m_pen_color, 1), QBrush(m_pen_color));

	dt->tempDrawingItem.push_back(el);
}

void STWhiteBoardScene::drawTo(PathItemData *dt, const QPointF &to)
{
	QGraphicsLineItem* li = addLine(dt->prePoint.x(), dt->prePoint.y(), to.x(), to.y(),
		QPen(QBrush(m_pen_color), m_pen_thickness, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

	dt->tempDrawingItem.push_back(li);
}

void STWhiteBoardScene::onPenDown(QPointF pt, int id)
{
	m_pathItemData = new PathItemData;
	m_pathItemData->prePoint = pt;//scene point;
	m_pathItemData->pathItem = new STWhiteBoardPathItem;
	m_pathItemData->pathItem->addPoint(pt);

	drawStart(m_pathItemData);

}

void STWhiteBoardScene::onPenMove(QPointF pt, int id)
{
	QPointF to = pt;

	if (m_pathItemData->pathItem)
	{
		m_pathItemData->pathItem->addPoint(to);
	}

	drawTo(m_pathItemData, to);
	m_pathItemData->prePoint = to;
}

void STWhiteBoardScene::onPenUp(int id)
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

void STWhiteBoardScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_type == STWhiteBoardActionType::Pen)
	{
		m_isDrawing = true;
		onPenDown(event->scenePos());
	}
	else if (m_type == STWhiteBoardActionType::Text)
	{
		m_txtItem = new STWhiteBoardTextItem;
		m_txtItem->setDefaultTextColor(m_txt_color);
		m_txtItem->setPlainText(QString::fromLocal8Bit(""));
		QFont font = m_txtItem->font();
		font.setPixelSize(m_txt_size);
		m_txtItem->setFont(font);
		m_txtItem->setSelected(true);
		m_txtItem->setFocus();
		m_txtItem->setPos(event->scenePos());
		QGraphicsScene::addItem(m_txtItem);
	}
	else if (m_type == STWhiteBoardActionType::Select)
	{
		QGraphicsScene::mousePressEvent(event);
	}
	else
	{
		return;
	}
}

void STWhiteBoardScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_isDrawing)
	{
		onPenMove(event->scenePos());
	}
	QGraphicsScene::mouseMoveEvent(event);
}

void STWhiteBoardScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
	if (m_isDrawing)
	{
		m_isDrawing = false;
		onPenUp();
	}
	QGraphicsScene::mouseReleaseEvent(event);
}

void STWhiteBoardScene::keyPressEvent(QKeyEvent *event)
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

void STWhiteBoardScene::deleteSlectedItem()
{
	// 移除所有选中的 items
	while (!selectedItems().isEmpty())
	{
		removeItem(selectedItems().front());
	}
}
