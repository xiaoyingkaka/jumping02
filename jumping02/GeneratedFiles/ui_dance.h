/********************************************************************************
** Form generated from reading UI file 'dance.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANCE_H
#define UI_DANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dance
{
public:
    QLabel *maxNumber;
    QLabel *label_song;
    QLineEdit *songNumber;
    QLabel *boyNumber;
    QLineEdit *boyNumber_2;
    QLabel *label_girl;
    QLineEdit *girlNumber;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_back;
    QLabel *result;

    void setupUi(QWidget *dance)
    {
        if (dance->objectName().isEmpty())
            dance->setObjectName(QStringLiteral("dance"));
        dance->resize(431, 372);
        maxNumber = new QLabel(dance);
        maxNumber->setObjectName(QStringLiteral("maxNumber"));
        maxNumber->setGeometry(QRect(131, 40, 101, 20));
        label_song = new QLabel(dance);
        label_song->setObjectName(QStringLiteral("label_song"));
        label_song->setGeometry(QRect(70, 70, 72, 15));
        songNumber = new QLineEdit(dance);
        songNumber->setObjectName(QStringLiteral("songNumber"));
        songNumber->setGeometry(QRect(130, 70, 113, 21));
        boyNumber = new QLabel(dance);
        boyNumber->setObjectName(QStringLiteral("boyNumber"));
        boyNumber->setGeometry(QRect(70, 110, 72, 15));
        boyNumber_2 = new QLineEdit(dance);
        boyNumber_2->setObjectName(QStringLiteral("boyNumber_2"));
        boyNumber_2->setGeometry(QRect(130, 110, 113, 21));
        label_girl = new QLabel(dance);
        label_girl->setObjectName(QStringLiteral("label_girl"));
        label_girl->setGeometry(QRect(70, 150, 72, 15));
        girlNumber = new QLineEdit(dance);
        girlNumber->setObjectName(QStringLiteral("girlNumber"));
        girlNumber->setGeometry(QRect(130, 150, 113, 21));
        pushButton_ok = new QPushButton(dance);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(260, 150, 93, 28));
        pushButton_back = new QPushButton(dance);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(260, 300, 93, 28));
        result = new QLabel(dance);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(0, 200, 601, 71));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);

        retranslateUi(dance);
        QObject::connect(pushButton_ok, SIGNAL(clicked()), dance, SLOT(ok()));
        QObject::connect(pushButton_back, SIGNAL(clicked()), dance, SLOT(back()));

        QMetaObject::connectSlotsByName(dance);
    } // setupUi

    void retranslateUi(QWidget *dance)
    {
        dance->setWindowTitle(QApplication::translate("dance", "Form", Q_NULLPTR));
        maxNumber->setText(QApplication::translate("dance", "something", Q_NULLPTR));
        label_song->setText(QApplication::translate("dance", "song", Q_NULLPTR));
        boyNumber->setText(QApplication::translate("dance", "boy", Q_NULLPTR));
        label_girl->setText(QApplication::translate("dance", "girl", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("dance", "ok", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("dance", "back", Q_NULLPTR));
        result->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dance: public Ui_dance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANCE_H
