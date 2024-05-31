#ifndef TABSQLITE_H
#define TABSQLITE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDateTime>
#include <QDebug>
#include <QLineSeries>
#include <QChartView>
#include <QDebug>
#include <QDateTimeAxis>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class TabSqlite;
}

class TabSqlite : public QWidget
{
    Q_OBJECT

public:
    explicit TabSqlite(QWidget *parent = nullptr);
    ~TabSqlite();

private:
    Ui::TabSqlite *ui;
    QSqlDatabase qSqlDatabase;
    QLineSeries* illuLine;
    QLineSeries* tempLine;
    QLineSeries* humiLine;
    QChart *chart = nullptr;
    QChartView *chartView = nullptr;
    QDateTimeAxis * axisX;
    QDateTime firstDate;
    QDateTime lastDate;

    QPen initPen(int, Qt::GlobalColor, Qt::PenCapStyle, Qt::PenJoinStyle);
    void updateLastDateTime(int);
    void updateLastDateTimeSql(int);
private slots:
    void Tab5RecvDataSlot(QString);
    void searchDbSlot();
    void deleteDbSlot();

};

#endif // TABSQLITE_H
