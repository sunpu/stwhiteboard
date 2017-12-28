#ifndef STWHITEBOARDVIEW_H
#define STWHITEBOARDVIEW_H

#include <QWidget>
#include <QGraphicsView>
#include "stwhiteboardconst.h"

namespace tahiti
{
	class STWhiteBoardScene;
	class STWhiteBoardView : public QGraphicsView
	{
		Q_OBJECT

	public:
		STWhiteBoardView(QWidget *parent = 0);
		~STWhiteBoardView();

		STWhiteBoardScene* getScene() { return m_scene; }
		void setScene(STWhiteBoardScene *scene);
		void setMode(STWhiteBoardActionType type);
		void setPenColor(QColor color);
		void setPenThickness(int width);
		void setTxtColor(QColor color);
		void setTxtSize(int size);
		void deleteSlectedItem();
		void clearSelection();
	protected:
		void resizeEvent(QResizeEvent *event);
	private:
		STWhiteBoardScene* m_scene;
	Q_SIGNALS:
		void slideChangedBefore(void);
		void slideChangedAfter(void);
	};
}
#endif
