/********************************************************************************
** Form generated from reading UI file 'STWhiteBoard.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STWHITEBOARD_H
#define UI_STWHITEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STWhiteBoardClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QMainWindow *STWhiteBoardClass)
    {
        if (STWhiteBoardClass->objectName().isEmpty())
            STWhiteBoardClass->setObjectName(QStringLiteral("STWhiteBoardClass"));
        STWhiteBoardClass->resize(963, 744);
        STWhiteBoardClass->setStyleSheet(QStringLiteral("QWidget#centralWidget {background-color: #2e3037;}"));
        centralWidget = new QWidget(STWhiteBoardClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        STWhiteBoardClass->setCentralWidget(centralWidget);

        retranslateUi(STWhiteBoardClass);

        QMetaObject::connectSlotsByName(STWhiteBoardClass);
    } // setupUi

    void retranslateUi(QMainWindow *STWhiteBoardClass)
    {
        STWhiteBoardClass->setWindowTitle(QApplication::translate("STWhiteBoardClass", "PaintLearn", 0));
    } // retranslateUi

};

namespace Ui {
    class STWhiteBoardClass: public Ui_STWhiteBoardClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STWHITEBOARD_H
