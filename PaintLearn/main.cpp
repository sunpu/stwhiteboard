#include "stwhiteboard.h"
#include <QApplication>

using namespace tahiti;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	STWhiteBoard w;

	w.show();

	return a.exec();
}
