#include "tabsensor.h"
#include "ui_tabsensor.h"

TabSensor::TabSensor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TabSensor)
{
    ui->setupUi(this);
    illuLine = new QLineSeries(this);
    illuLine->setName("조도");
    tempLine = new QLineSeries(this);
    tempLine->setName("온도");
    humiLine = new QLineSeries(this);
    humiLine->setName("습도");

    QPen illuPen = initPen(2, Qt::red, Qt::FlatCap, Qt::MiterJoin);
    illuLine->setPen(illuPen);
    QPen tempPen = initPen(2, Qt::blue, Qt::FlatCap, Qt::MiterJoin);
    tempLine->setPen(tempPen);
    QPen humiPen = initPen(2, Qt::green, Qt::FlatCap, Qt::MiterJoin);
    humiLine->setPen(humiPen);

    chart = new QChart();
//   chart->legend()->hide();
    chart->addSeries(illuLine);
    chart->addSeries(tempLine);
    chart->addSeries(humiLine);

//    chart->setTitle("illumination chart");
    chart->createDefaultAxes();
    chart->axes(Qt::Vertical).first()->setRange(0, 100);
//    chart->axes(Qt::Horizontal).first()->setRange(0, 24);

    chartView = new QChartView(chart);
    chart->setAnimationOptions(QChart::AnimationOption::SeriesAnimations);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->pChartViewLayout->layout()->addWidget(chartView);

    axisX = new QDateTimeAxis;
//    axisX->setFormat("MM-dd hh:mm");
    axisX->setFormat("hh:mm");


    updateLastDateTime(0);

    chartView->chart()->setAxisX(axisX,illuLine);
    chartView->chart()->setAxisX(axisX,tempLine);
    chartView->chart()->setAxisX(axisX,humiLine);

    connect(ui->pPBClearButton,SIGNAL(clicked()),this,SLOT(chartPlotClear()));
}

TabSensor::~TabSensor()
{
    delete ui;
}

void TabSensor::updateLastDateTime(int)
{
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();

    firstDate.setDate(date);
    firstDate.setTime(time);

    lastDate.setDate(date);
    QTime tempTime = time.addSecs(10);
    lastDate.setTime(tempTime);
    axisX->setRange(firstDate,lastDate);
}

void TabSensor::chartPlotClear()
{

    illuLine->clear();
    tempLine->clear();
    humiLine->clear();
    updateLastDateTime(0);
}

void TabSensor::Tab4RecvDataSlot(QString recvData)
{

    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    QDateTime xValue;
    xValue.setDate(date);
    xValue.setTime(time);

    QStringList qlist = recvData.split("@");
    QString illu = qlist[3];        //조도
    QString temp = qlist[4];        //온도
    QString humi = qlist[5];        //습도
//    qDebug() << illu << temp << humi;
//    qDebug() << xValue.toMSecsSinceEpoch();

    illuLine->append(xValue.toMSecsSinceEpoch(),illu.toInt());
    tempLine->append(xValue.toMSecsSinceEpoch(),temp.toFloat());
    humiLine->append(xValue.toMSecsSinceEpoch(),humi.toFloat());

    qDebug() << lastDate << '\n' << xValue;
    if (lastDate <= xValue) {
        lastDate.setTime(time.addSecs(60));
        axisX->setRange(firstDate, lastDate);
    }
}

QPen TabSensor::initPen(int w, Qt::GlobalColor color, Qt::PenCapStyle cap, Qt::PenJoinStyle join)
{
    QPen pen;
    pen.setWidth(w);
    pen.setBrush(color);
    pen.setCapStyle(cap);
    pen.setJoinStyle(join);

    return pen;
}
