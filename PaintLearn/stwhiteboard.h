#ifndef STWB_H
#define STWB_H

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include <QGraphicsView>
#include "ui_STWhiteBoard.h"
#include "stwbview.h"
#include "stwbvtoolbar.h"
#include "stwbnetworkclient.h"

namespace tahiti
{
	class STWhiteBoard : public QMainWindow
	{
		Q_OBJECT
	public:
		STWhiteBoard(QWidget *parent = 0);
		~STWhiteBoard();

		private Q_SLOTS:
		void setPenThickness(int thickness);
		void setPenColor(QString color);
		void setTextSize(int size);
		void setTextColor(QString color);
		void setActionMode(int mode);
		void deleteAction();
		void hideStylePanels();
		void showPenStylePanel();
		void showTextStylePanel();
		void connectNetworkServer();
		void drawRemoteRealtimePen(QString color, int thickness, QVector<QPoint> points);
		void drawRemotePenItem(QString color, int thickness, QVector<QPoint> points, int itemID);
		void drawRemoteTextItem(QString color, int size, QString content, QPoint pos, int itemID);
		void moveRemoteItems(QPoint pos, int itemID);
		void deleteRemoteItems(QList<int> itemIDs);
		void editableAuthority(QString editable);
	protected:
		bool eventFilter(QObject* watched, QEvent* e);
		void resizeEvent(QResizeEvent* size);

	private:
		Ui::STWhiteBoardClass ui;
		STWBView* m_view;
		STWBVToolbar* m_vtoolbar;
		STWBPenStylePanel* m_penStylePanel;
		STWBTextStylePanel* m_textStylePanel;
		STWBNetworkClient* m_network;
	};
}
#endif
