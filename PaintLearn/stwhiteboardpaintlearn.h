#ifndef STWHITEBOARD_H
#define STWHITEBOARD_H

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include <QGraphicsView>
#include "ui_paintlearn.h"
#include "stwhiteboardview.h"

namespace tahiti
{
	class PaintLearn : public QMainWindow
	{
		Q_OBJECT

	public:
		PaintLearn(QWidget *parent = 0);
		~PaintLearn();

		private slots:
		void on_pbSelect_clicked();
		void on_pbPen_clicked();
		void on_pbTxt_clicked();
		void on_pbDelete_clicked();

	private:
		Ui::PaintLearnClass ui;
		STWhiteBoardView *view;
	};
}
#endif
