#include "stwbnetworkclient.h"

using namespace tahiti;

STWBNetworkClient::STWBNetworkClient(QObject * parent) : QObject(parent)
{
	m_tcpSocket = new QTcpSocket(this);//申请堆空间有TCP发送和接受操作
	m_tcpIp = "10.1.0.10";
	m_tcpPort = "10001";
	m_tcpSocket->connectToHost(m_tcpIp, m_tcpPort.toInt());//连接主机
	connect(m_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this,
		SLOT(displayError(QAbstractSocket::SocketError)));//错误连接
	connect(m_tcpSocket, SIGNAL(connected()), this, SLOT(connectUpdate()));//更新连接之后按钮的使能
	connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(readMessage()));//读取信息的连接

}

STWBNetworkClient::~STWBNetworkClient()
{

}

void STWBNetworkClient::sendMessage()
{
	QByteArray data;
	data.append("啊啊啊");
	m_tcpSocket->write(data);
}

void STWBNetworkClient::readMessage()
{
	QByteArray data = m_tcpSocket->readAll();
	QString p = data.toHex();
}

void STWBNetworkClient::displayError(QAbstractSocket::SocketError e)
{
	printf("error:%d", e);
}

void STWBNetworkClient::connectUpdate()
{
	printf("connected");
	sendMessage();
}

void STWBNetworkClient::disconnectUpdate()
{
	printf("disconnected");
}