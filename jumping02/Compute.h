#pragma once

#include<qwidget.h>
#include"ui_Compute.h"

class Compute :public QWidget {
		Q_OBJECT
public:
	int boyCount;
	int girlCount;
	Compute(QWidget *parent = Q_NULLPTR);
	void attach(int boyCount, int girlCount);
	void showText();
public slots:
	void openNewWidget1();
	void openNewWidget2();
	void back();

private:
	Ui::Form ui;
};