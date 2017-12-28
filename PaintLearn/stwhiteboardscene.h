#ifndef STWHITEBOARDSCENE_H
#define STWHITEBOARDSCENE_H

#include <QPointF>
#include <QGraphicsScene>
#include <QObject>
#include <QMap>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include "stwhiteboarditem.h"
#include "stwhiteboardtextitem.h"

namespace tahiti
{
	struct PathItemData
	{
		QPointF prePoint;
		std::vector<QGraphicsItem*> tempDrawingItem;
		STWhiteBoardPathItem* pathItem;
		PathItemData()
		{
			pathItem = Q_NULLPTR;
			tempDrawingItem.clear();
		}
	};

	class STWhiteBoardScene : public QGraphicsScene
	{
	public:
		STWhiteBoardScene(QObject* parent = 0);

		void setMode(STWhiteBoardActionType type);
		void setPenColor(QColor color);
		void setPenThickness(int w);
		void setTxtColor(QColor color);
		void setTxtSize(int size);
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
		STWhiteBoardActionType m_type;
		QColor m_pen_color;
		int m_pen_thickness;
		QColor m_txt_color;
		int m_txt_size;
		bool m_isDrawing;
		PathItemData* m_pathItemData;
		STWhiteBoardTextItem* m_txtItem;
	};
}
#endif
