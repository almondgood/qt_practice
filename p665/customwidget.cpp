#include <QApplication>
#include <QPushButton>

#include "customwidget.h"

CustomWidget::CustomWidget(QWidget* parent) : QWidget(parent)
{
    QPushButton *button = new QPushButton("Quit", this);
    button->resize(80, 35); 
    this->resize(200, 200);	
    move(300, 300);

//	QObject::connect(button,SIGNAL(clicked()),qApp, SLOT(quit()));
	QObject::connect(button,SIGNAL(clicked()),this, SLOT(processClick()));
	QObject::connect(this,SIGNAL(widgetClicked()),qApp, SLOT(quit()));
}

void CustomWidget::processClick()
{
//	qApp->quit();
	emit widgetClicked();
}
