#pragma once

#include<qwidget.h>
#include"ui_whenMeet.h"

class whenMeet :public QWidget {
	Q_OBJECT
public:
	int boyCount;
	int girlCount;
	int boy;
	int girl;
	whenMeet(QWidget *parent = Q_NULLPTR);
	void attach(int boyCount, int girlCount);
	void showText();

public slots:
	void ok();
	void back();



private:
	Ui::Form2 ui;
};
