#include"whenMeet.h"
#include"Compute.h"
#include"Dancing01.h"
#include<string>
#include<sstream>
using namespace std;
whenMeet::whenMeet(QWidget *parent)
	:QWidget(parent)
{
	ui.setupUi(this);
}

void whenMeet::attach(int boyCount, int girlCount) {
	this->boyCount = boyCount;
	this->girlCount = girlCount;
}

void whenMeet::showText() {
	ostringstream oss;
	oss << " the number of boy is " << boyCount << " the number of girl is " << girlCount;
	QString a;//显示男女生数量
	a.fromStdString(oss.str());
	ui.maxNumber->setText(a);

}
void whenMeet::ok() {
	//boy = ui.boyNumber->text().toInt();
	boy = ui.boyNumber->text().toInt();
	girl = ui.girlNumber->text().toInt();
	Dancing01  tt;
	tt.boyBound = boyCount;
	tt.girlBound = girlCount;
	Generate temp = tt.Dance(boy, girl);
	ostringstream oss;
	oss << "there will dance in the song  "<< temp.numOfSong ;
	string lab = oss.str();
	
	//std::ostringstream oss = b.toStdString();
	//b = QString::fromStdString(oss);
	ui.songNumber->setText(lab.c_str());
}

void whenMeet::back() {
	Compute *u = new Compute();
	u->attach(boyCount, girlCount);
	u->show();
	this->close();
}