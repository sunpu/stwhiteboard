#ifndef STWBNETWORKCLIENT_H
#define STWBNETWORKCLIENT_H

#include <QObject>
#include <QTcpSocket>

namespace tahiti
{
	class STWBNetworkClient : public QObject
	{
		Q_OBJECT

	public:
		STWBNetworkClient(QObject * parent = 0);
		~STWBNetworkClient();
		void sendMessage();
		private slots:
		void readMessage();
		void displayError(QAbstractSocket::SocketError);
		void connectUpdate();
		void disconnectUpdate();


	private:
		QTcpSocket* m_tcpSocket;//直接建立TCP套接字类
		QString m_tcpIp;//存储IP地址
		QString m_tcpPort;//存储端口地址

	};
}

#endif
