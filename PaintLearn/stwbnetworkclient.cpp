#include "stwbnetworkclient.h"

using namespace tahiti;

STWBNetworkClient::STWBNetworkClient(QObject * parent) : QObject(parent)
{
	m_tcpSocket = NULL;
	//qRegisterMetaType<QVector<QPoint>>("QVector<QPoint>");
}

STWBNetworkClient::~STWBNetworkClient()
{

}
void STWBNetworkClient::connectServer(QString ip, QString port)
{
	m_tcpSocket = new QTcpSocket(this); // 申请堆空间有TCP发送和接受操作
	m_tcpIp = ip;
	m_tcpPort = port;
	m_tcpSocket->connectToHost(m_tcpIp, m_tcpPort.toInt()); // 连接主机
	connect(m_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this,
		SLOT(displayError(QAbstractSocket::SocketError))); // 错误连接
	connect(m_tcpSocket, SIGNAL(connected()), this, SLOT(connectUpdate())); // 更新连接之后按钮的使能
	connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(readMessage())); // 读取信息的连接
}

void STWBNetworkClient::disconnectServer()
{
	m_tcpSocket->disconnect();
	delete(m_tcpSocket);
	m_tcpSocket = NULL;
}

void STWBNetworkClient::sendMessage(QString msg)
{
	m_tcpSocket->write("#*#");
	m_tcpSocket->write(msg.toUtf8());
}

void STWBNetworkClient::readMessage()
{
	QByteArray data = m_tcpSocket->readAll();

	QJsonParseError complexJsonError;
	QJsonDocument complexParseDoucment = QJsonDocument::fromJson(data, &complexJsonError);
	if (complexJsonError.error == QJsonParseError::NoError && complexParseDoucment.isObject())
	{
		QJsonObject jsonObject = complexParseDoucment.object();
		QJsonValue value;

		QString type;
		QString subtype;
		QJsonObject dataObject;
		int itemID;
		// 先获得通用字段
		if (jsonObject.contains("type"))
		{
			value = jsonObject.take("type");
			if (value.isString())
			{
				type = value.toString();
			}
		}
		if (jsonObject.contains("subtype"))
		{
			value = jsonObject.take("subtype");
			if (value.isString())
			{
				subtype = value.toString();
			}
		}
		if (jsonObject.contains("data"))
		{
			value = jsonObject.take("data");
			if (value.isObject())
			{
				dataObject = value.toObject();
			}
		}
		if (jsonObject.contains("itemID"))
		{
			value = jsonObject.take("itemID");
			if (value.isDouble())
			{
				itemID = value.toDouble();
			}
		}
		// 根据分支处理
		if (type == "setClientAuthority")
		{
			QString editable;
			if (dataObject.contains("editable"))
			{
				value = dataObject.take("editable");
				if (value.isString())
				{
					editable = value.toString();
					// TODO
				}
			}
		}
		else if (type == "realtime")
		{
			QString action;
			if (dataObject.contains("action"))
			{
				value = dataObject.take("action");
				if (value.isString())
				{
					action = value.toString();
					if (action == "pen")
					{
						QString color;
						int thickness;
						QVector<QPoint> pointsList;
						if (dataObject.contains("color"))
						{
							value = dataObject.take("color");
							if (value.isString())
							{
								color = value.toString();
							}
						}
						if (dataObject.contains("thickness"))
						{
							value = dataObject.take("thickness");
							if (value.isDouble())
							{
								thickness = value.toDouble();
							}
						}
						if (dataObject.contains("points"))
						{
							value = dataObject.take("points");
							if (value.isArray())
							{
								QJsonArray points = value.toArray();
								for (int i = 0; i < points.size(); i+=2)
								{
									if (points.at(i).isDouble() && points.at(i + 1).isDouble())
									{
										pointsList.append(QPoint(points.at(i).toDouble(),
											points.at(i + 1).toDouble()));
									}
								}
							}
						}
						// TODO
					}
				}
			}
		}
		else if (type == "finish")
		{
			if (subtype == "addItem")
			{
				QString action;
				if (dataObject.contains("action"))
				{
					value = dataObject.take("action");
					if (value.isString())
					{
						action = value.toString();
					}
				}

				if (action == "pen")
				{
					QString color;
					int thickness;
					QVector<QPoint> pointsList;
					if (dataObject.contains("color"))
					{
						value = dataObject.take("color");
						if (value.isString())
						{
							color = value.toString();
						}
					}
					if (dataObject.contains("thickness"))
					{
						value = dataObject.take("thickness");
						if (value.isDouble())
						{
							thickness = value.toDouble();
						}
					}
					if (dataObject.contains("points"))
					{
						value = dataObject.take("points");
						if (value.isArray())
						{
							QJsonArray points = value.toArray();
							for (int i = 0; i < points.size(); i++)
							{
								if (points.at(i).isDouble() && points.at(i + 1).isDouble())
								{
									pointsList.append(QPoint(points.at(i).toDouble(),
										points.at(i + 1).toDouble()));
								}
							}
						}
					}
					// TODO
					//Q_EMIT drawPenItem(color, thickness, pointsList);
				}
				else if (action == "text")
				{
					QString color;
					int size;
					QString content;
					int x;
					int y;
					if (dataObject.contains("color"))
					{
						value = dataObject.take("color");
						if (value.isString())
						{
							color = value.toString();
						}
					}
					if (dataObject.contains("size"))
					{
						value = dataObject.take("size");
						if (value.isDouble())
						{
							size = value.toDouble();
						}
					}
					if (dataObject.contains("content"))
					{
						value = dataObject.take("content");
						if (value.isString())
						{
							content = value.toString();
						}
					}
					if (dataObject.contains("pos"))
					{
						value = dataObject.take("pos");
						if (value.isArray())
						{
							QJsonArray posArray = value.toArray();
							if (posArray.at(0).isDouble())
							{
								x = posArray.at(0).toDouble();
							}
							if (posArray.at(1).isDouble())
							{
								y = posArray.at(1).toDouble();
							}
							// TODO
						}
					}
				}

			}
			else if (subtype == "delItem")
			{
				// TODO
			}
		}
	}
	else
	{
		printf("error data");
	}
}

void STWBNetworkClient::createClient(QString role)
{
	// {"type":"createClient","data":{"role":"teacher"}}
	QJsonObject complexJson;
	complexJson.insert("type", "createClient");

	QJsonObject dataJson;
	dataJson.insert("role", role);

	complexJson.insert("data", dataJson);

	QJsonDocument complexDocument;
	complexDocument.setObject(complexJson);
	QByteArray complexByteArray = complexDocument.toJson(QJsonDocument::Compact);
	QString complexJsonStr(complexByteArray);

	sendMessage(complexJsonStr);
}

void STWBNetworkClient::createCourse(QString courseID)
{
	// {"type":"createCourse","data":{"courseID":"111"}}
	QJsonObject complexJson;
	complexJson.insert("type", "createCourse");

	QJsonObject dataJson;
	dataJson.insert("courseID", courseID);

	complexJson.insert("data", dataJson);

	QJsonDocument complexDocument;
	complexDocument.setObject(complexJson);
	QByteArray complexByteArray = complexDocument.toJson(QJsonDocument::Compact);
	QString complexJsonStr(complexByteArray);

	sendMessage(complexJsonStr);
}

void STWBNetworkClient::joinCourse(QString courseID)
{
	// {"type":"joinCourse","data":{"courseID":"111"}}
	QJsonObject complexJson;
	complexJson.insert("type", "joinCourse");

	QJsonObject dataJson;
	dataJson.insert("courseID", courseID);

	complexJson.insert("data", dataJson);

	QJsonDocument complexDocument;
	complexDocument.setObject(complexJson);
	QByteArray complexByteArray = complexDocument.toJson(QJsonDocument::Compact);
	QString complexJsonStr(complexByteArray);

	sendMessage(complexJsonStr);
}

void STWBNetworkClient::setClientAuthority(QString editable)
{
	// {"type":"setClientAuthority","data":{"editable":"True/False"}}
	QJsonObject complexJson;
	complexJson.insert("type", "setClientAuthority");

	QJsonObject dataJson;
	dataJson.insert("editable", editable);

	complexJson.insert("data", dataJson);

	QJsonDocument complexDocument;
	complexDocument.setObject(complexJson);
	QByteArray complexByteArray = complexDocument.toJson(QJsonDocument::Compact);
	QString complexJsonStr(complexByteArray);

	sendMessage(complexJsonStr);
}

void STWBNetworkClient::drawRealtimePenItem(QString penColor, int penThickness, QVector<QPoint> points)
{
	// {"type":"realtime", "data":{"action":"pen", "color":"#000000", "thickness":12, "points":[12,23,12,34]}}
	QJsonObject complexJson;
	complexJson.insert("type", "realtime");

	QJsonObject dataJson;
	dataJson.insert("action", "pen");
	dataJson.insert("color", penColor);
	dataJson.insert("thickness", penThickness);

	QJsonArray pointsArray;
	for (int i = 0, j = 0; i < points.size(); i++, j+=2)
	{
		pointsArray.insert(j, points[i].x());
		pointsArray.insert(j + 1, points[i].y());
	}
	dataJson.insert("points", pointsArray);

	complexJson.insert("data", dataJson);

	QJsonDocument complexDocument;
	complexDocument.setObject(complexJson);
	QByteArray complexByteArray = complexDocument.toJson(QJsonDocument::Compact);
	QString complexJsonStr(complexByteArray);

	sendMessage(complexJsonStr);
}

void STWBNetworkClient::drawPenItem(int itemID, QString penColor, int penThickness, QVector<QPoint> points)
{
	// {"type":"finish", "subtype":"addItem",
	// "data":{"action":"pen", "color":"#000000", "thickness":12, "points":[12,23,12,34]}, "itemID":0}
	QJsonObject complexJson;
	complexJson.insert("type", "finish");
	complexJson.insert("subtype", "addItem");
	complexJson.insert("itemID", itemID);

	QJsonObject dataJson;
	dataJson.insert("action", "pen");
	dataJson.insert("color", penColor);
	dataJson.insert("thickness", penThickness);

	QJsonArray pointsArray;
	for (int i = 0, j = 0; i < points.size(); i++, j += 2)
	{
		pointsArray.insert(j, points[i].x());
		pointsArray.insert(j + 1, points[i].y());
	}
	dataJson.insert("points", pointsArray);

	complexJson.insert("data", dataJson);

	QJsonDocument complexDocument;
	complexDocument.setObject(complexJson);
	QByteArray complexByteArray = complexDocument.toJson(QJsonDocument::Compact);
	QString complexJsonStr(complexByteArray);

	sendMessage(complexJsonStr);
}

void STWBNetworkClient::drawTextItem(int itemID,
	QString textColor, int textSize, QString content, QPoint position)
{
	// {"type":"finish", "subtype":"addItem",
	// "data":{"action":"text", "color":"#000000", "size":12, "content":"aaa", "pos":[12, 23]}, "itemID":1}
	QJsonObject complexJson;
	complexJson.insert("type", "finish");
	complexJson.insert("subtype", "addItem");
	complexJson.insert("itemID", itemID);

	QJsonObject dataJson;
	dataJson.insert("action", "text");
	dataJson.insert("color", textColor);
	dataJson.insert("size", textSize);
	dataJson.insert("content", content);

	QJsonArray pointsArray;
	pointsArray.insert(0, position.x());
	pointsArray.insert(1, position.y());
	dataJson.insert("pos", pointsArray);

	complexJson.insert("data", dataJson);

	QJsonDocument complexDocument;
	complexDocument.setObject(complexJson);
	QByteArray complexByteArray = complexDocument.toJson(QJsonDocument::Compact);
	QString complexJsonStr(complexByteArray);

	sendMessage(complexJsonStr);
}

void STWBNetworkClient::deleteItem(int itemID)
{
	// {"type":"finish", "subtype":"delItem", "itemID":1}
	QJsonObject complexJson;
	complexJson.insert("type", "finish");
	complexJson.insert("subtype", "delItem");
	complexJson.insert("itemID", itemID);

	QJsonDocument complexDocument;
	complexDocument.setObject(complexJson);
	QByteArray complexByteArray = complexDocument.toJson(QJsonDocument::Compact);
	QString complexJsonStr(complexByteArray);

	sendMessage(complexJsonStr);
}

void STWBNetworkClient::displayError(QAbstractSocket::SocketError e)
{
	printf("error:%d", e);
//	Q_EMIT drawPenItem("123", 12, QVector<QPoint>());
	//Q_EMIT drawPenItem1();
	//Q_EMIT onConnect();
}

void STWBNetworkClient::connectUpdate()
{
	printf("connected");
	//Q_EMIT onConnect();
}

void STWBNetworkClient::disconnectUpdate()
{
	printf("disconnected");
}