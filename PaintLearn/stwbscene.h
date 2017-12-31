#ifndef STWBSCENE_H
#define STWBSCENE_H

#include <QPointF>
#include <QGraphicsScene>
#include <QObject>
#include <QMap>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include "stwbpathitem.h"
#include "stwbtextitem.h"

namespace tahiti
{
	struct PathItemData
	{
		QPointF prePoint;
		std::vector<QGraphicsItem*> tempDrawingItem;
		STWBPathItem* pathItem;
		PathItemData()
		{
			pathItem = Q_NULLPTR;
			tempDrawingItem.clear();
		}
	};

	class STWBScene : public QGraphicsScene
	{
	public:
		STWBScene(QObject* parent = 0);

		void setMode(STWBActionType type);
		void setPenColor(QColor color);
		void setPenThickness(int w);
		void setTextColor(QColor color);
		void setTextSize(int size);
		void onPenDown(QPointF pt, int id = 0);
		void onPenMove(QPointF pt, int id = 0);
		void onPenUp(int id = 0);
		void deleteSlectedItem();
	protected:
		void mousePressEvent(QGraphicsSceneMouseEvent *event);
		void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
		void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
		void keyPressEvent(QKeyEvent *event);
		void drawStart(PathItemData* dt);
		void drawTo(PathItemData* dt, const QPointF& to);
	private:
		STWBActionType m_type;
		QColor m_pen_color;
		int m_pen_thickness;
		QColor m_text_color;
		int m_text_size;
		bool m_isDrawing;
		PathItemData* m_pathItemData;
		STWBTextItem* m_textItem;
	};
}
#endif
