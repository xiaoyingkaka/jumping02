/********************************************************************************
** Form generated from reading UI file 'whenMeet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHENMEET_H
#define UI_WHENMEET_H

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

class Ui_Form2
{
public:
    QLineEdit *boyNumber;
    QLabel *inputBoyNumber;
    QLineEdit *girlNumber;
    QLabel *label;
    QLabel *maxNumber;
    QPushButton *ok;
    QPushButton *back;
    QLabel *songNumber;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QStringLiteral("Form2"));
        Form2->resize(400, 300);
        boyNumber = new QLineEdit(Form2);
        boyNumber->setObjectName(QStringLiteral("boyNumber"));
        boyNumber->setGeometry(QRect(130, 80, 113, 21));
        inputBoyNumber = new QLabel(Form2);
        inputBoyNumber->setObjectName(QStringLiteral("inputBoyNumber"));
        inputBoyNumber->setGeometry(QRect(30, 80, 91, 20));
        girlNumber = new QLineEdit(Form2);
        girlNumber->setObjectName(QStringLiteral("girlNumber"));
        girlNumber->setGeometry(QRect(130, 110, 113, 21));
        label = new QLabel(Form2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 110, 111, 20));
        maxNumber = new QLabel(Form2);
        maxNumber->setObjectName(QStringLiteral("maxNumber"));
        maxNumber->setGeometry(QRect(150, 40, 91, 21));
        ok = new QPushButton(Form2);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(270, 110, 93, 28));
        back = new QPushButton(Form2);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(270, 240, 93, 28));
        songNumber = new QLabel(Form2);
        songNumber->setObjectName(QStringLiteral("songNumber"));
        songNumber->setGeometry(QRect(20, 180, 321, 41));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(songNumber->sizePolicy().hasHeightForWidth());
        songNumber->setSizePolicy(sizePolicy);

        retranslateUi(Form2);
        QObject::connect(ok, SIGNAL(clicked()), Form2, SLOT(ok()));
        QObject::connect(back, SIGNAL(clicked()), Form2, SLOT(back()));

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", Q_NULLPTR));
        inputBoyNumber->setText(QApplication::translate("Form2", "boy number", Q_NULLPTR));
        label->setText(QApplication::translate("Form2", "girl number", Q_NULLPTR));
        maxNumber->setText(QApplication::translate("Form2", "maxNumber", Q_NULLPTR));
        ok->setText(QApplication::translate("Form2", "ok", Q_NULLPTR));
        back->setText(QApplication::translate("Form2", "back", Q_NULLPTR));
        songNumber->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHENMEET_H
