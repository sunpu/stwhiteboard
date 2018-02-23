/********************************************************************************
** Form generated from reading UI file 'STWBDocWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STWBDOCWINDOW_H
#define UI_STWBDOCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STWBDocWindowClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widTop;
    QVBoxLayout *verticalLayout_2;
    QWidget *widTitle;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pb2Config;
    QPushButton *pbMinimum;
    QPushButton *pbClose;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widBottom;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QWidget *widget_9;
    QLineEdit *leUserName;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QWidget *widget_11;
    QLineEdit *lePasswd;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbRemeberPasswd;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbAutoLogin;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbLogin;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pb2Regist;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *STWBDocWindowClass)
    {
        if (STWBDocWindowClass->objectName().isEmpty())
            STWBDocWindowClass->setObjectName(QStringLiteral("STWBDocWindowClass"));
        STWBDocWindowClass->resize(324, 403);
        STWBDocWindowClass->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(STWBDocWindowClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widTop = new QWidget(STWBDocWindowClass);
        widTop->setObjectName(QStringLiteral("widTop"));
        widTop->setStyleSheet(QStringLiteral("background-color: #434555;"));
        verticalLayout_2 = new QVBoxLayout(widTop);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widTitle = new QWidget(widTop);
        widTitle->setObjectName(QStringLiteral("widTitle"));
        widTitle->setMinimumSize(QSize(0, 45));
        widTitle->setMaximumSize(QSize(16777215, 45));
        widTitle->setStyleSheet(QStringLiteral(""));
        horizontalLayout_10 = new QHBoxLayout(widTitle);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(15, 0, 0, 0);
        label_3 = new QLabel(widTitle);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        widget_17 = new QWidget(widTitle);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        horizontalLayout_9 = new QHBoxLayout(widget_17);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, 0);
        pb2Config = new QPushButton(widget_17);
        pb2Config->setObjectName(QStringLiteral("pb2Config"));
        pb2Config->setMinimumSize(QSize(20, 20));
        pb2Config->setMaximumSize(QSize(20, 20));
        pb2Config->setStyleSheet(QLatin1String("QPushButton{\n"
"	background: transparent;\n"
"	border-image: url(:/STSample/Resources/images/config.png);}\n"
"\n"
"QPushButton:hover:!pressed {\n"
"	background-color: rgb(218, 218, 218);\n"
"}"));

        horizontalLayout_9->addWidget(pb2Config);

        pbMinimum = new QPushButton(widget_17);
        pbMinimum->setObjectName(QStringLiteral("pbMinimum"));
        pbMinimum->setMinimumSize(QSize(20, 20));
        pbMinimum->setMaximumSize(QSize(20, 20));
        pbMinimum->setStyleSheet(QLatin1String("QPushButton{\n"
"	background: transparent;\n"
"	border-image: url(:/STSample/Resources/images/minimum.png);}\n"
"\n"
"QPushButton:hover:!pressed {\n"
"	background-color: rgb(218, 218, 218);\n"
"}"));

        horizontalLayout_9->addWidget(pbMinimum);

        pbClose = new QPushButton(widget_17);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        pbClose->setMinimumSize(QSize(20, 20));
        pbClose->setMaximumSize(QSize(20, 20));
        pbClose->setStyleSheet(QLatin1String("\n"
"QPushButton{border-image: url(:/STSample/Resources/images/close.png);}\n"
"\n"
"QPushButton:hover:!pressed {\n"
"	\n"
"	background-color: #ff6741;\n"
"}"));

        horizontalLayout_9->addWidget(pbClose);


        horizontalLayout_10->addWidget(widget_17);


        verticalLayout_2->addWidget(widTitle);

        widget_2 = new QWidget(widTop);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        verticalLayout_4 = new QVBoxLayout(widget_7);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout_6->addWidget(widget_7);

        horizontalSpacer_4 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(widTop);

        widBottom = new QWidget(STWBDocWindowClass);
        widBottom->setObjectName(QStringLiteral("widBottom"));
        widBottom->setStyleSheet(QStringLiteral("QWidget#widBottom {background-color: #ffffff;border: 1px solid #e3e3e3;}"));
        verticalLayout_3 = new QVBoxLayout(widBottom);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 10, 0, 0);
        widget = new QWidget(widBottom);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 10, 20, 5);
        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(0, 30));
        widget_8->setMaximumSize(QSize(16777215, 30));
        widget_8->setStyleSheet(QLatin1String("QWidget#widget_8{border: 0px;border-bottom: 1px solid #e3e3e3;}\n"
""));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(widget_8);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_7->addWidget(label);

        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMinimumSize(QSize(10, 0));
        widget_9->setMaximumSize(QSize(10, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Arabic"));
        widget_9->setFont(font1);
        widget_9->setStyleSheet(QLatin1String("border: 0px;border-left: 1px solid #e3e3e3;\n"
""));

        horizontalLayout_7->addWidget(widget_9);


        horizontalLayout->addWidget(widget_8);

        leUserName = new QLineEdit(widget);
        leUserName->setObjectName(QStringLiteral("leUserName"));
        leUserName->setMinimumSize(QSize(0, 30));
        leUserName->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        leUserName->setFont(font2);
        leUserName->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leUserName->setMaxLength(20);

        horizontalLayout->addWidget(leUserName);


        verticalLayout_3->addWidget(widget);

        widget_3 = new QWidget(widBottom);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 5, 20, 5);
        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(0, 30));
        widget_10->setMaximumSize(QSize(16777215, 30));
        widget_10->setStyleSheet(QLatin1String("QWidget#widget_10{border: 0px;border-bottom: 1px solid #e3e3e3;}\n"
""));
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(widget_10);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_8->addWidget(label_2);

        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(10, 0));
        widget_11->setMaximumSize(QSize(10, 16777215));
        widget_11->setStyleSheet(QLatin1String("border: 0px;border-left: 1px solid #e3e3e3;\n"
""));

        horizontalLayout_8->addWidget(widget_11);


        horizontalLayout_2->addWidget(widget_10);

        lePasswd = new QLineEdit(widget_3);
        lePasswd->setObjectName(QStringLiteral("lePasswd"));
        lePasswd->setMinimumSize(QSize(0, 30));
        lePasswd->setMaximumSize(QSize(16777215, 30));
        lePasswd->setFont(font2);
        lePasswd->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        lePasswd->setMaxLength(20);
        lePasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lePasswd);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(widBottom);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 10, 20, 30);
        cbRemeberPasswd = new QCheckBox(widget_4);
        cbRemeberPasswd->setObjectName(QStringLiteral("cbRemeberPasswd"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        cbRemeberPasswd->setFont(font3);
        cbRemeberPasswd->setStyleSheet(QLatin1String("QCheckBox {\n"
"    spacing: 5px;\n"
"	color: rgb(67, 69, 85);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"	\n"
"	image: url(:/STSample/Resources/images/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/STSample/Resources/images/checkbox_checked.png);\n"
"}\n"
""));

        horizontalLayout_3->addWidget(cbRemeberPasswd);

        horizontalSpacer = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cbAutoLogin = new QCheckBox(widget_4);
        cbAutoLogin->setObjectName(QStringLiteral("cbAutoLogin"));
        cbAutoLogin->setMaximumSize(QSize(16777215, 16777215));
        cbAutoLogin->setFont(font3);
        cbAutoLogin->setLayoutDirection(Qt::LeftToRight);
        cbAutoLogin->setStyleSheet(QLatin1String("QCheckBox {\n"
"    spacing: 5px;\n"
"	color: rgb(67, 69, 85);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"	\n"
"	image: url(:/STSample/Resources/images/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/STSample/Resources/images/checkbox_checked.png);\n"
"}\n"
""));

        horizontalLayout_3->addWidget(cbAutoLogin);


        verticalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(widBottom);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, 0, 20, 0);
        pbLogin = new QPushButton(widget_5);
        pbLogin->setObjectName(QStringLiteral("pbLogin"));
        pbLogin->setMinimumSize(QSize(0, 35));
        pbLogin->setMaximumSize(QSize(16777215, 35));
        pbLogin->setFont(font2);
        pbLogin->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(48, 186, 120);\n"
"}\n"
"QPushButton:hover:pressed {\n"
"	background-color: rgb(48, 186, 120);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	\n"
"	background-color: rgb(109, 206, 160);\n"
"}"));
        pbLogin->setFlat(false);

        horizontalLayout_4->addWidget(pbLogin);


        verticalLayout_3->addWidget(widget_5);

        widget_6 = new QWidget(widBottom);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, 0, 20, -1);
        pb2Regist = new QPushButton(widget_6);
        pb2Regist->setObjectName(QStringLiteral("pb2Regist"));
        pb2Regist->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	color: #30ba78;\n"
"	font:9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	color: #6dcea0;\n"
"}"));
        pb2Regist->setFlat(true);

        horizontalLayout_5->addWidget(pb2Regist);

        horizontalSpacer_2 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget_6);


        verticalLayout->addWidget(widBottom);


        retranslateUi(STWBDocWindowClass);

        QMetaObject::connectSlotsByName(STWBDocWindowClass);
    } // setupUi

    void retranslateUi(QDialog *STWBDocWindowClass)
    {
        STWBDocWindowClass->setWindowTitle(QApplication::translate("STWBDocWindowClass", "Dialog", 0));
        label_3->setText(QApplication::translate("STWBDocWindowClass", "VMediax ST", 0));
        pb2Config->setText(QString());
        pbMinimum->setText(QString());
        pbClose->setText(QString());
        label->setText(QApplication::translate("STWBDocWindowClass", "\343\200\200\350\264\246\343\200\200\345\217\267\343\200\200", 0));
        label_2->setText(QApplication::translate("STWBDocWindowClass", "\343\200\200\345\257\206\343\200\200\347\240\201\343\200\200", 0));
        cbRemeberPasswd->setText(QApplication::translate("STWBDocWindowClass", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        cbAutoLogin->setText(QApplication::translate("STWBDocWindowClass", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        pbLogin->setText(QApplication::translate("STWBDocWindowClass", "\347\231\273\343\200\200\345\275\225", 0));
        pb2Regist->setText(QApplication::translate("STWBDocWindowClass", "\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class STWBDocWindowClass: public Ui_STWBDocWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STWBDOCWINDOW_H
