#include <QApplication>
#include "customwidget.h"
int main(int argc, char **argv)
{
    QApplication app(argc, argv);


	CustomWidget *widget = new CustomWidget(0);
	widget->show();
	/*
    QPushButton *button = new QPushButton("Quit", 0);
    button->resize(80, 35);
    button->move(300, 300);

	QObject::connect(button,SIGNAL(clicked()),&app, SLOT(quit()));

    button->show(); 	
	*/

    return app.exec();
}
