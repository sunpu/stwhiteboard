#ifndef STWBNETWORKCLIENT_H
#define STWBNETWORKCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonDocument>
#include <QThread>
#include <QMetaType>

namespace tahiti
{
	//Q_DECLARE_METATYPE(QVector<QPoint>);
	class STWBNetworkClient : public QObject
	{
		Q_OBJECT

	public:
		STWBNetworkClient(QObject * parent = 0);
		~STWBNetworkClient();
		void connectServer(QString ip, QString port);
		void disconnectServer();
		void createClient(QString role);
		void createCourse(QString courseID);
		void joinCourse(QString courseID);
		void setClientAuthority(QString editable); 
		void drawRealtimePenItem(QString penColor, int penThickness, QVector<QPoint> points);
		void drawPenItem(QString penColor, int penThickness, QVector<QPoint> points, int itemID);
		void drawTextItem(QString textColor, int textSize, QString content, QPoint position, int itemID);
		void moveItem(QPoint position, int itemID);
		void deleteItems(QList<int> itemIDs);
	private:
		void sendMessage(QString data);
		void processMessage(QString message);
		private slots:
		void readMessage();
		void displayError(QAbstractSocket::SocketError);
		void connectUpdate();
		void disconnectUpdate();
	Q_SIGNALS:
		void onConnect();
		void drawRemoteRealtimePen(QString color, int thickness, QVector<QPoint> points);
		void drawRemotePenItem(QString color, int thickness, QVector<QPoint> points, int itemID);
		void drawRemoteTextItem(QString color, int size, QString content, QPoint pos, int itemID);
		void moveRemoteItems(QPoint point, int itemID);
		void deleteRemoteItems(QList<int> itemIDs);
		void editableAuthority(QString editable);
	private:
		QTcpSocket* m_tcpSocket;//直接建立TCP套接字类
		QString m_tcpIp;//存储IP地址
		QString m_tcpPort;//存储端口地址
		QString m_bigData;

	};
}

#endif
