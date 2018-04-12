#include "jumping02.h"
#include"Compute.h"

jumping02::jumping02(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}


void jumping02::openNewVidget() {
	
	boyCount = ui.lineEdit_BoyCount->text().toInt();
	girlCount = ui.lineEdit_GirlCount->text().toInt();
	Compute *w = new Compute();
	w->attach(boyCount,girlCount);
	w->showText();
	w->show();
	this->close();




}

