#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "tabsocket.h"
#include "tabsensor.h"
#include "tabsqlite.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
    TabSocket *pTabSocket;
    TabSensor *pTabSensor;
    TabSqlite *pTabSqlite;

};
#endif // MAINWIDGET_H