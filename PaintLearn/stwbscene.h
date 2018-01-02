#ifndef STWBSCENE_H
#define STWBSCENE_H

#include <QPoint>
#include <QGraphicsScene>
#include <QObject>
#include <QMap>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include "stwbpathitem.h"
#include "stwbtextitem.h"
#include "stwbnetworkclient.h"

namespace tahiti
{
	struct PathItemData
	{
		QPoint prePoint;
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
		STWBScene(STWBNetworkClient* network);

		void setMode(STWBActionType type);
		void setPenColor(QString color);
		void setPenThickness(int w);
		void setTextColor(QString color);
		void setTextSize(int size);
		void onPenDown(QPoint pt, int id = 0);
		void onPenMove(QPoint pt, int id = 0);
		void onPenUp(int id = 0);
		void deleteSelectedItem();
		void clearStatus();
	protected:
		void mousePressEvent(QGraphicsSceneMouseEvent *event);
		void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
		void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
		void keyPressEvent(QKeyEvent *event);
		void drawStart(PathItemData* dt);
		void drawTo(PathItemData* dt, const QPoint& to);
	private:
		void removeEmptyTextItem();
		private Q_SLOTS:
		void drawRemotePenItem(QString color, int thickness, QVector<QPoint> points);
		void drawRemotePenItem1();
	private:
		STWBActionType m_type;
		QString m_pen_color;
		int m_pen_thickness;
		QString m_text_color;
		int m_text_size;
		bool m_isDrawing;
		PathItemData* m_pathItemData;
		STWBTextItem* m_textItem;
		STWBTextItem* m_last_textItem;
		STWBNetworkClient* m_network;
		int m_itemID_index;
		STWBPathItem* m_remotePathItem;
	};
}
#endif
