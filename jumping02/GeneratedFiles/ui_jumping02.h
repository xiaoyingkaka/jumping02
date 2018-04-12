/********************************************************************************
** Form generated from reading UI file 'jumping02.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUMPING02_H
#define UI_JUMPING02_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jumping02Class
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_BoyCount;
    QLabel *label;
    QLineEdit *lineEdit_GirlCount;
    QLabel *label_2;
    QPushButton *pushButton_confirm;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *jumping02Class)
    {
        if (jumping02Class->objectName().isEmpty())
            jumping02Class->setObjectName(QStringLiteral("jumping02Class"));
        jumping02Class->resize(600, 400);
        centralWidget = new QWidget(jumping02Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit_BoyCount = new QLineEdit(centralWidget);
        lineEdit_BoyCount->setObjectName(QStringLiteral("lineEdit_BoyCount"));
        lineEdit_BoyCount->setGeometry(QRect(250, 110, 111, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 110, 72, 15));
        lineEdit_GirlCount = new QLineEdit(centralWidget);
        lineEdit_GirlCount->setObjectName(QStringLiteral("lineEdit_GirlCount"));
        lineEdit_GirlCount->setGeometry(QRect(250, 170, 113, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 170, 81, 20));
        pushButton_confirm = new QPushButton(centralWidget);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(410, 260, 93, 28));
        jumping02Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(jumping02Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        jumping02Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(jumping02Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        jumping02Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(jumping02Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        jumping02Class->setStatusBar(statusBar);

        retranslateUi(jumping02Class);
        QObject::connect(pushButton_confirm, SIGNAL(clicked()), jumping02Class, SLOT(openNewVidget()));

        QMetaObject::connectSlotsByName(jumping02Class);
    } // setupUi

    void retranslateUi(QMainWindow *jumping02Class)
    {
        jumping02Class->setWindowTitle(QApplication::translate("jumping02Class", "jumping02", Q_NULLPTR));
        label->setText(QApplication::translate("jumping02Class", "BOY COUNT", Q_NULLPTR));
        label_2->setText(QApplication::translate("jumping02Class", "GIRL COUNT", Q_NULLPTR));
        pushButton_confirm->setText(QApplication::translate("jumping02Class", "ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class jumping02Class: public Ui_jumping02Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUMPING02_H
