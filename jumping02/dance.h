#pragma once

#include<qwidget.h>
#include"ui_dance.h"

class dance :public QWidget {
	Q_OBJECT
public:
	bool result1;
	bool result2;
	int boyCount;
	int girlCount;
	int boy;
	int girl;
	int song;
	int girlIndex;
	int boyIndex;
	dance(QWidget *parent = Q_NULLPTR);
	void attach(int boyCount, int girlCount);
	void showText();

public slots:
	void ok();
	void back();



private:
	Ui::dance ui;
};