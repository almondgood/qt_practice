#ifndef TABSENSOR_H
#define TABSENSOR_H

#include <QWidget>
#include <QLineSeries>
#include <QChartView>
#include <QDebug>
#include <QDateTimeAxis>
#include <QDate>
#include <QTime>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class TabSensor;
}

class TabSensor : public QWidget
{
    Q_OBJECT

public:
    explicit TabSensor(QWidget *parent = nullptr);
    ~TabSensor();

private:
    Ui::TabSensor *ui;

    QLineSeries* illuLine;
    QLineSeries* tempLine;
    QLineSeries* humiLine;
    QChart *chart = nullptr;
    QChartView *chartView = nullptr;
    QDateTimeAxis * axisX;
    QDateTime firstDate;
    QDateTime lastDate;

    QPen initPen(int, Qt::GlobalColor, Qt::PenCapStyle, Qt::PenJoinStyle);

private slots:
    void chartPlotClear();
    void Tab4RecvDataSlot(QString);
    void updateLastDateTime(int);
};

#endif // TABSENSOR_H
