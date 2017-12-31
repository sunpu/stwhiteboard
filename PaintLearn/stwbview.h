#ifndef STWBVIEW_H
#define STWBVIEW_H

#include <QWidget>
#include <QGraphicsView>
#include "stwbconst.h"

namespace tahiti
{
	class STWBScene;
	class STWBView : public QGraphicsView
	{
		Q_OBJECT

	public:
		STWBView(QWidget *parent = 0);
		~STWBView();

		STWBScene* getScene() { return m_scene; }
		void setScene(STWBScene* scene);
		void setMode(STWBActionType type);
		void setPenColor(QColor color);
		void setPenThickness(int width);
		void setTextColor(QColor color);
		void setTextSize(int size);
		void deleteSlectedItem();
		void clearSelection();
	protected:
		void resizeEvent(QResizeEvent* event);
	private:
		STWBScene* m_scene;
	Q_SIGNALS:
		void slideChangedBefore(void);
		void slideChangedAfter(void);
	};
}
#endif
