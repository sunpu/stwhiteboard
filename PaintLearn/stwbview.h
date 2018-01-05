#ifndef STWBVIEW_H
#define STWBVIEW_H

#include <QWidget>
#include <QGraphicsView>
#include "stwbconst.h"
#include "stwbnetworkclient.h"

namespace tahiti
{
	class STWBScene;
	class STWBView : public QGraphicsView
	{
		Q_OBJECT

	public:
		STWBView(STWBNetworkClient* network);
		~STWBView();

		STWBScene* getScene() { return m_scene; }
		void setScene(STWBScene* scene);
		void setMode(STWBActionType type);
		void setPenColor(QString color);
		void setPenThickness(int width);
		void setTextColor(QString color);
		void setTextSize(int size);
		void deleteSelectedItem();
		void clearSelection();
		void drawRemoteRealtimePen(QString color, int thickness, QVector<QPoint> points);
		void drawRemotePenItem(QString color, int thickness, QVector<QPoint> points, int itemID);
		void drawRemoteTextItem(QString color, int size, QString content, QPoint pos, int itemID);
		void moveRemoteItems(QPoint pos, int itemID);
		void deleteRemoteItems(QList<int> itemIDs);
	protected:
		void resizeEvent(QResizeEvent* event);
	Q_SIGNALS:
		void slideChangedBefore(void);
		void slideChangedAfter(void);
	private:
		STWBScene* m_scene;
		STWBNetworkClient* m_network;
	};
}
#endif
