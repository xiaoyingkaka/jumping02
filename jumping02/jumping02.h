#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_jumping02.h"

class jumping02 : public QMainWindow
{
	Q_OBJECT

public:
	int boyCount;
	int girlCount;
	jumping02(QWidget *parent = Q_NULLPTR);
public slots:
	void openNewVidget();
	

private:
	Ui::jumping02Class ui;
};
