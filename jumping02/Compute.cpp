#include "Compute.h"
#include "jumping02.h"
#include"whenMeet.h"
#include"dance.h"
#include<string>
#include<sstream>
using namespace std;
Compute::Compute(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}
void Compute::attach(int boyCount, int girlCount) {
	this->boyCount = boyCount;
	this->girlCount = girlCount;
	
}

void Compute::showText() {
	ostringstream oss;
	oss << " the number of boy is " << boyCount << " the number of girl is " << girlCount;
	QString a;//显示男女生数量
	a.fromStdString(oss.str());
	ui.maxNumber ->setText(a);

}

void Compute::openNewWidget1() {
	whenMeet *x = new whenMeet;
	x->attach(boyCount, girlCount);
	x->showText();
	x->show();
	this->close();

}

void Compute::openNewWidget2() {
	dance *y = new dance;
	y->attach(boyCount, girlCount);
	y->showText();
	y->show();
	this->close();

}


void Compute::back() {
	jumping02 *v= new jumping02();
	v->show();
	this->close();
}