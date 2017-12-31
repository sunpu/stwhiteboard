#include "stwhiteboard.h"
#include "stwbnetworkclient.h"
#include <QApplication>

using namespace tahiti;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	STWhiteBoard w;

	w.show();
	STWBNetworkClient* client = new STWBNetworkClient();

	return a.exec();
}
