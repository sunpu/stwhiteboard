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
