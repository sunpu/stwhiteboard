/********************************************************************************
** Form generated from reading UI file 'STWBVToolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STWBVTOOLBAR_H
#define UI_STWBVTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STWBVToolbarClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widSelect;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbSelect;
    QWidget *widPen;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pbPen;
    QLabel *lblPenColor;
    QWidget *widText;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pbText;
    QLabel *lblTextColor;
    QWidget *widDelete;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pbDelete;

    void setupUi(QDialog *STWBVToolbarClass)
    {
        if (STWBVToolbarClass->objectName().isEmpty())
            STWBVToolbarClass->setObjectName(QStringLiteral("STWBVToolbarClass"));
        STWBVToolbarClass->resize(94, 195);
        STWBVToolbarClass->setMaximumSize(QSize(94, 16777215));
        STWBVToolbarClass->setStyleSheet(QStringLiteral("QDialog{background-color:rgba(61,63,68,0.7);border-radius:8px;}"));
        verticalLayout = new QVBoxLayout(STWBVToolbarClass);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        widSelect = new QWidget(STWBVToolbarClass);
        widSelect->setObjectName(QStringLiteral("widSelect"));
        widSelect->setMaximumSize(QSize(36, 36));
        widSelect->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(widSelect);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        pbSelect = new QPushButton(widSelect);
        pbSelect->setObjectName(QStringLiteral("pbSelect"));
        pbSelect->setMinimumSize(QSize(24, 24));
        pbSelect->setMaximumSize(QSize(24, 24));
        pbSelect->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-image: url(:/PaintLearn/Resources/mouse.png);\n"
"border:2px;\n"
"	border-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"QWidget#widSelect{\n"
"background-color: rgb(85, 170, 255);}\n"
"}"));

        verticalLayout_2->addWidget(pbSelect);


        verticalLayout->addWidget(widSelect);

        widPen = new QWidget(STWBVToolbarClass);
        widPen->setObjectName(QStringLiteral("widPen"));
        widPen->setMaximumSize(QSize(36, 40));
        verticalLayout_3 = new QVBoxLayout(widPen);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        pbPen = new QPushButton(widPen);
        pbPen->setObjectName(QStringLiteral("pbPen"));
        pbPen->setMinimumSize(QSize(24, 22));
        pbPen->setMaximumSize(QSize(24, 22));
        pbPen->setStyleSheet(QStringLiteral("border-image: url(:/PaintLearn/Resources/pen.png);"));

        verticalLayout_3->addWidget(pbPen);

        lblPenColor = new QLabel(widPen);
        lblPenColor->setObjectName(QStringLiteral("lblPenColor"));
        lblPenColor->setMaximumSize(QSize(24, 3));
        lblPenColor->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(lblPenColor);


        verticalLayout->addWidget(widPen);

        widText = new QWidget(STWBVToolbarClass);
        widText->setObjectName(QStringLiteral("widText"));
        widText->setMaximumSize(QSize(36, 40));
        verticalLayout_4 = new QVBoxLayout(widText);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 6, 6, 6);
        pbText = new QPushButton(widText);
        pbText->setObjectName(QStringLiteral("pbText"));
        pbText->setMinimumSize(QSize(24, 22));
        pbText->setMaximumSize(QSize(24, 22));
        pbText->setStyleSheet(QStringLiteral("border-image: url(:/PaintLearn/Resources/text.png);"));

        verticalLayout_4->addWidget(pbText);

        lblTextColor = new QLabel(widText);
        lblTextColor->setObjectName(QStringLiteral("lblTextColor"));
        lblTextColor->setMaximumSize(QSize(24, 3));
        lblTextColor->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(lblTextColor);


        verticalLayout->addWidget(widText);

        widDelete = new QWidget(STWBVToolbarClass);
        widDelete->setObjectName(QStringLiteral("widDelete"));
        widDelete->setMaximumSize(QSize(36, 36));
        verticalLayout_5 = new QVBoxLayout(widDelete);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 6, 6);
        pbDelete = new QPushButton(widDelete);
        pbDelete->setObjectName(QStringLiteral("pbDelete"));
        pbDelete->setMinimumSize(QSize(24, 24));
        pbDelete->setMaximumSize(QSize(24, 24));
        pbDelete->setStyleSheet(QStringLiteral("border-image: url(:/PaintLearn/Resources/trashcan.png);"));

        verticalLayout_5->addWidget(pbDelete);


        verticalLayout->addWidget(widDelete);


        retranslateUi(STWBVToolbarClass);

        QMetaObject::connectSlotsByName(STWBVToolbarClass);
    } // setupUi

    void retranslateUi(QDialog *STWBVToolbarClass)
    {
        STWBVToolbarClass->setWindowTitle(QApplication::translate("STWBVToolbarClass", "Dialog", 0));
        pbSelect->setText(QString());
        pbPen->setText(QString());
        lblPenColor->setText(QString());
        pbText->setText(QString());
        lblTextColor->setText(QString());
        pbDelete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class STWBVToolbarClass: public Ui_STWBVToolbarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STWBVTOOLBAR_H
