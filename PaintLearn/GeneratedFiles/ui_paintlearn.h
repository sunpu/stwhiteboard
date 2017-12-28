/********************************************************************************
** Form generated from reading UI file 'paintlearn.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTLEARN_H
#define UI_PAINTLEARN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaintLearnClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pbSelect;
    QPushButton *pbPen;
    QPushButton *pbTxt;
    QPushButton *pbDelete;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *PaintLearnClass)
    {
        if (PaintLearnClass->objectName().isEmpty())
            PaintLearnClass->setObjectName(QStringLiteral("PaintLearnClass"));
        PaintLearnClass->resize(963, 744);
        centralWidget = new QWidget(PaintLearnClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        PaintLearnClass->setCentralWidget(centralWidget);
        dockWidget = new QDockWidget(PaintLearnClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pbSelect = new QPushButton(dockWidgetContents);
        pbSelect->setObjectName(QStringLiteral("pbSelect"));

        verticalLayout->addWidget(pbSelect);

        pbPen = new QPushButton(dockWidgetContents);
        pbPen->setObjectName(QStringLiteral("pbPen"));

        verticalLayout->addWidget(pbPen);

        pbTxt = new QPushButton(dockWidgetContents);
        pbTxt->setObjectName(QStringLiteral("pbTxt"));

        verticalLayout->addWidget(pbTxt);

        pbDelete = new QPushButton(dockWidgetContents);
        pbDelete->setObjectName(QStringLiteral("pbDelete"));

        verticalLayout->addWidget(pbDelete);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        dockWidget->setWidget(dockWidgetContents);
        PaintLearnClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(PaintLearnClass);
        QObject::connect(pbPen, SIGNAL(clicked()), PaintLearnClass, SLOT(on_btnPen_clicked()));
        QObject::connect(pbDelete, SIGNAL(clicked()), PaintLearnClass, SLOT(on_btnEraser_clicked()));
        QObject::connect(pbSelect, SIGNAL(clicked()), PaintLearnClass, SLOT(on_btnSelector_clicked()));

        QMetaObject::connectSlotsByName(PaintLearnClass);
    } // setupUi

    void retranslateUi(QMainWindow *PaintLearnClass)
    {
        PaintLearnClass->setWindowTitle(QApplication::translate("PaintLearnClass", "PaintLearn", 0));
        pbSelect->setText(QApplication::translate("PaintLearnClass", "\351\200\211\346\213\251", 0));
        pbPen->setText(QApplication::translate("PaintLearnClass", "\347\224\273\347\254\224", 0));
        pbTxt->setText(QApplication::translate("PaintLearnClass", "\346\226\207\345\255\227", 0));
        pbDelete->setText(QApplication::translate("PaintLearnClass", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class PaintLearnClass: public Ui_PaintLearnClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTLEARN_H
