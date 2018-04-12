/********************************************************************************
** Form generated from reading UI file 'Compute.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTE_H
#define UI_COMPUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton_whenMeet;
    QPushButton *pushButton_whoDance;
    QLabel *maxNumber;
    QPushButton *pushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(578, 351);
        pushButton_whenMeet = new QPushButton(Form);
        pushButton_whenMeet->setObjectName(QStringLiteral("pushButton_whenMeet"));
        pushButton_whenMeet->setGeometry(QRect(70, 160, 191, 28));
        pushButton_whoDance = new QPushButton(Form);
        pushButton_whoDance->setObjectName(QStringLiteral("pushButton_whoDance"));
        pushButton_whoDance->setGeometry(QRect(310, 160, 201, 28));
        maxNumber = new QLabel(Form);
        maxNumber->setObjectName(QStringLiteral("maxNumber"));
        maxNumber->setGeometry(QRect(240, 50, 81, 61));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 280, 93, 28));

        retranslateUi(Form);
        QObject::connect(pushButton_whenMeet, SIGNAL(clicked()), Form, SLOT(openNewWidget1()));
        QObject::connect(pushButton_whoDance, SIGNAL(clicked()), Form, SLOT(openNewWidget2()));
        QObject::connect(pushButton, SIGNAL(clicked()), Form, SLOT(back()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        pushButton_whenMeet->setText(QApplication::translate("Form", "when will they meet", Q_NULLPTR));
        pushButton_whoDance->setText(QApplication::translate("Form", "who will you dance", Q_NULLPTR));
        maxNumber->setText(QApplication::translate("Form", "something", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTE_H
