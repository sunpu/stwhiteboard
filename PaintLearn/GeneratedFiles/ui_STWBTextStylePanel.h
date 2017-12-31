/********************************************************************************
** Form generated from reading UI file 'STWBTextStylePanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STWBTEXTSTYLEPANEL_H
#define UI_STWBTEXTSTYLEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STWBTextStylePanelClass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_4;
    QWidget *widMain;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb1;
    QPushButton *pb2;
    QPushButton *pb3;
    QPushButton *pb4;
    QFrame *line;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *lblLightgray;
    QLabel *lblOrange;
    QLabel *lblRed;
    QLabel *lblGray;
    QLabel *lblBlack;
    QLabel *lblBlue;
    QLabel *lblSkyblue;
    QLabel *lblWhite;
    QLabel *lblYellow;
    QLabel *lblGreen;
    QLabel *lblPurple;
    QLabel *lblPink;

    void setupUi(QDialog *STWBTextStylePanelClass)
    {
        if (STWBTextStylePanelClass->objectName().isEmpty())
            STWBTextStylePanelClass->setObjectName(QStringLiteral("STWBTextStylePanelClass"));
        STWBTextStylePanelClass->resize(128, 141);
        STWBTextStylePanelClass->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(STWBTextStylePanelClass);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(STWBTextStylePanelClass);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMaximumSize(QSize(5, 16777215));

        horizontalLayout_2->addWidget(widget_4);

        widMain = new QWidget(STWBTextStylePanelClass);
        widMain->setObjectName(QStringLiteral("widMain"));
        widMain->setStyleSheet(QStringLiteral("QWidget#widMain{background-color:rgba(61,63,68,0.7);border-radius:8px;}"));
        verticalLayout_2 = new QVBoxLayout(widMain);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(widMain);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pb1 = new QPushButton(widget);
        pb1->setObjectName(QStringLiteral("pb1"));
        pb1->setMinimumSize(QSize(16, 16));
        pb1->setMaximumSize(QSize(16, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pb1->setFont(font);
        pb1->setStyleSheet(QLatin1String("\n"
"color: #8e9096;\n"
"border:0px;"));
        pb1->setFlat(true);

        horizontalLayout->addWidget(pb1);

        pb2 = new QPushButton(widget);
        pb2->setObjectName(QStringLiteral("pb2"));
        pb2->setMinimumSize(QSize(16, 16));
        pb2->setMaximumSize(QSize(16, 16));
        pb2->setFont(font);
        pb2->setStyleSheet(QLatin1String("\n"
"color: #8e9096;\n"
"border:0px;"));
        pb2->setFlat(true);

        horizontalLayout->addWidget(pb2);

        pb3 = new QPushButton(widget);
        pb3->setObjectName(QStringLiteral("pb3"));
        pb3->setMinimumSize(QSize(16, 16));
        pb3->setMaximumSize(QSize(16, 16));
        pb3->setFont(font);
        pb3->setStyleSheet(QLatin1String("\n"
"color: #8e9096;\n"
"border:0px;"));
        pb3->setFlat(true);

        horizontalLayout->addWidget(pb3);

        pb4 = new QPushButton(widget);
        pb4->setObjectName(QStringLiteral("pb4"));
        pb4->setMinimumSize(QSize(16, 16));
        pb4->setMaximumSize(QSize(16, 16));
        pb4->setFont(font);
        pb4->setStyleSheet(QLatin1String("\n"
"color: #8e9096;\n"
"border:0px;"));
        pb4->setFlat(true);

        horizontalLayout->addWidget(pb4);


        verticalLayout_2->addWidget(widget);

        line = new QFrame(widMain);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QStringLiteral(""));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line);

        widget_2 = new QWidget(widMain);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblLightgray = new QLabel(widget_2);
        lblLightgray->setObjectName(QStringLiteral("lblLightgray"));
        lblLightgray->setMinimumSize(QSize(16, 16));
        lblLightgray->setMaximumSize(QSize(16, 16));
        lblLightgray->setStyleSheet(QLatin1String("background-color: rgb(195, 195, 195);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblLightgray, 0, 1, 1, 1);

        lblOrange = new QLabel(widget_2);
        lblOrange->setObjectName(QStringLiteral("lblOrange"));
        lblOrange->setMaximumSize(QSize(16, 16));
        lblOrange->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 0);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblOrange, 1, 1, 1, 1);

        lblRed = new QLabel(widget_2);
        lblRed->setObjectName(QStringLiteral("lblRed"));
        lblRed->setMaximumSize(QSize(16, 16));
        lblRed->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblRed, 1, 0, 1, 1);

        lblGray = new QLabel(widget_2);
        lblGray->setObjectName(QStringLiteral("lblGray"));
        lblGray->setMinimumSize(QSize(16, 16));
        lblGray->setMaximumSize(QSize(16, 16));
        lblGray->setStyleSheet(QLatin1String("background-color: rgb(126, 126, 126);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblGray, 0, 2, 1, 1);

        lblBlack = new QLabel(widget_2);
        lblBlack->setObjectName(QStringLiteral("lblBlack"));
        lblBlack->setMinimumSize(QSize(16, 16));
        lblBlack->setMaximumSize(QSize(16, 16));
        lblBlack->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblBlack, 0, 3, 1, 1);

        lblBlue = new QLabel(widget_2);
        lblBlue->setObjectName(QStringLiteral("lblBlue"));
        lblBlue->setMaximumSize(QSize(16, 16));
        lblBlue->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 255);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblBlue, 2, 1, 1, 1);

        lblSkyblue = new QLabel(widget_2);
        lblSkyblue->setObjectName(QStringLiteral("lblSkyblue"));
        lblSkyblue->setMaximumSize(QSize(16, 16));
        lblSkyblue->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 255);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblSkyblue, 2, 0, 1, 1);

        lblWhite = new QLabel(widget_2);
        lblWhite->setObjectName(QStringLiteral("lblWhite"));
        lblWhite->setMaximumSize(QSize(16, 16));
        lblWhite->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblWhite, 0, 0, 1, 1);

        lblYellow = new QLabel(widget_2);
        lblYellow->setObjectName(QStringLiteral("lblYellow"));
        lblYellow->setMaximumSize(QSize(16, 16));
        lblYellow->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 127);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblYellow, 1, 2, 1, 1);

        lblGreen = new QLabel(widget_2);
        lblGreen->setObjectName(QStringLiteral("lblGreen"));
        lblGreen->setMaximumSize(QSize(16, 16));
        lblGreen->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 0);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblGreen, 1, 3, 1, 1);

        lblPurple = new QLabel(widget_2);
        lblPurple->setObjectName(QStringLiteral("lblPurple"));
        lblPurple->setMaximumSize(QSize(16, 16));
        lblPurple->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblPurple, 2, 2, 1, 1);

        lblPink = new QLabel(widget_2);
        lblPink->setObjectName(QStringLiteral("lblPink"));
        lblPink->setMaximumSize(QSize(16, 16));
        lblPink->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"border-radius:2px;"));

        gridLayout->addWidget(lblPink, 2, 3, 1, 1);


        verticalLayout_2->addWidget(widget_2);


        horizontalLayout_2->addWidget(widMain);


        retranslateUi(STWBTextStylePanelClass);

        QMetaObject::connectSlotsByName(STWBTextStylePanelClass);
    } // setupUi

    void retranslateUi(QDialog *STWBTextStylePanelClass)
    {
        STWBTextStylePanelClass->setWindowTitle(QApplication::translate("STWBTextStylePanelClass", "Dialog", 0));
        pb1->setText(QApplication::translate("STWBTextStylePanelClass", "12", 0));
        pb2->setText(QApplication::translate("STWBTextStylePanelClass", "16", 0));
        pb3->setText(QApplication::translate("STWBTextStylePanelClass", "24", 0));
        pb4->setText(QApplication::translate("STWBTextStylePanelClass", "36", 0));
        lblLightgray->setText(QString());
        lblOrange->setText(QString());
        lblRed->setText(QString());
        lblGray->setText(QString());
        lblBlack->setText(QString());
        lblBlue->setText(QString());
        lblSkyblue->setText(QString());
        lblWhite->setText(QString());
        lblYellow->setText(QString());
        lblGreen->setText(QString());
        lblPurple->setText(QString());
        lblPink->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class STWBTextStylePanelClass: public Ui_STWBTextStylePanelClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STWBTEXTSTYLEPANEL_H
