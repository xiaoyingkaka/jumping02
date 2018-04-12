#include"dance.h"
#include"Compute.h"
#include"Dancing01.h"
#include<string>
#include<sstream>
using namespace std;

dance::dance(QWidget *parent)
	:QWidget(parent) {
	ui.setupUi(this);
}

void dance::attach(int boyCount, int girlCount) {
	this->boyCount = boyCount;
	this->girlCount = girlCount;
}

void dance::showText() {
	ostringstream oss;
	oss << " the number of boy is " << boyCount << " the number of girl is " << girlCount;
	QString a;//显示男女生数量
	a.fromStdString(oss.str());
	ui.maxNumber->setText(a);

}

void dance::ok() {
	
	boy = ui.boyNumber_2->text().toInt();
	girl = ui.girlNumber->text().toInt();
	song = ui.songNumber->text().toInt();
	Dancing01 tt;
	

	tt.boyBound = boyCount;
	tt.girlBound = girlCount;
	//tt.girlIndex = girlIndex;
	//tt.boyIndex = boyIndex;
	Generate temp = tt.dancing(song, boy, girl);
	
	ostringstream oss;
	if(temp.resultone == true ){
	oss << " The boy " <<boy << " is dancing with girl " <<temp.girl<< " in the song " << song <<  endl;
	}
	if (temp.resultone == false) {
		oss << " The boy " << boy << " has no partner in the song " << song << endl;
	}
	if (temp.resulttwo == true) {
		oss << " The girl " << girl << " is dancing with boy " << temp.boy << " in the song " << song << endl;
	}
	if (temp.resulttwo == false) {
		oss << " The girl " << girl << " has no partner in the song " << song << endl;
	}
	//QString c;
	//c.fromStdString(oss.str());
	//ui.result->setText(c);
	//QString p;
	//p = ui.result->text();
	//ui.result->show();
	string lab = oss.str();
	ui.result->setText(lab.c_str());
}

void dance::back() {
	Compute *y = new Compute();
	y->attach(boyCount, girlCount);
	y->show();
	this->close();
}