#include "stwhiteboardpaintlearn.h"

using namespace tahiti;

PaintLearn::PaintLearn(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	view = new STWhiteBoardView(this);
	//setCentralWidget(view);
	ui.centralWidget->layout()->addWidget(view);
	ui.centralWidget->setStyleSheet("background-color: #2e3037;");
	
}

PaintLearn::~PaintLearn()
{
}

void PaintLearn::on_pbSelect_clicked()
{
	view->clearSelection();
	view->setMode(STWhiteBoardActionType::Select);
}

void PaintLearn::on_pbPen_clicked()
{
	view->clearSelection();

	view->setPenColor(Qt::yellow);
	view->setPenThickness(10);
	view->setMode(STWhiteBoardActionType::Pen);
}

void PaintLearn::on_pbTxt_clicked()
{
	view->clearSelection();

	view->setTxtColor(Qt::green);
	view->setTxtSize(20);
	view->setMode(STWhiteBoardActionType::Text);
}

void PaintLearn::on_pbDelete_clicked()
{
	view->deleteSlectedItem();
}