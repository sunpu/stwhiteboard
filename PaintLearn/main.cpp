#include "stwhiteboardpaintlearn.h"
#include "stwhiteboardnetworkclient.h"
#include <QApplication>

using namespace tahiti;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PaintLearn w;

	w.show();
	STWhiteBoardNetworkClient* client = new STWhiteBoardNetworkClient();

	return a.exec();
}
