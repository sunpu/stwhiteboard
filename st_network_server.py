#!/usr/bin/python2.7
# -*- coding:utf-8 -*-

import SocketServer
from time import ctime
import json

courseDict = {}

class Course:
    def __init__(self, courseID):
        self.courseID = courseID
        self.clientDict = {}
        self.finishList = []

HOST = ''
PORT = 10001
ADDR = (HOST, PORT)
class Client(SocketServer.BaseRequestHandler):
    role = ''
    courseID = 0

    def sendHistoryMessage(self):
        finishList = courseDict[self.courseID].finishList
        for index in range(0, len(finishList)):
            self.request.sendall(finishList[index])

    def boardcastMessage(self, data):
        clientDict = courseDict[self.courseID].clientDict
        for k in clientDict.keys():
            if k == self.client_address:
                continue
            clientDict[k].sendall(data)

    def handle(self):
        # 客户端登入后，记住
        print '...connected from:', self.client_address
        while True: 
            data = self.request.recv(10240)
            print data, 'from', self.client_address

            datas = json.loads(data)
            if datas['type'] == 'createClient':
                self.role = datas['data']['role']
            elif datas['type'] == 'createCourse':
                self.courseID = datas['data']['courseID']
                course = Course(self.courseID)
                courseDict[self.courseID] = course
            elif datas['type'] == 'joinCourse':
                self.courseID = datas['data']['courseID']
                course = courseDict[self.courseID]
                course.clientDict[self.client_address] = self.request
                self.sendHistoryMessage()
            elif datas['type'] == 'setClientAuthority' or datas['type'] == 'finish':
                self.boardcastMessage(data)
                course = courseDict[self.courseID]
                course.finishList.append(data)
            elif datas['type'] == 'realtime':
                self.boardcastMessage(data)


tcpServ = SocketServer.ThreadingTCPServer(ADDR, Client)
print 'waiting for connection...'
tcpServ.serve_forever()