#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    this->resize(700, 450);
    pTab1DevControl = new Tab1DevControl(ui->pTab1);
    ui->pTab1->setLayout(pTab1DevControl->layout());

    pTab2SocketClient = new Tab2SocketClient(ui->pTab2);
    ui->pTab2->setLayout(pTab2SocketClient->layout());

    pTab3ControlPannel = new Tab3ControlPannel(ui->pTab3);
    ui->pTab3->setLayout(pTab3ControlPannel->layout());

    pTab4ChartPlot = new Tab4ChartPlot(ui->pTab4);
    ui->pTab4->setLayout(pTab4ChartPlot->layout());

    pTab5Database = new Tab5Database(ui->pTab5);
    ui->pTab5->setLayout(pTab5Database->layout());

    connect(pTab2SocketClient, SIGNAL(ledWriteSig(int)), pTab1DevControl->getpDial(), SLOT(setValue(int)));
    connect(pTab3ControlPannel, SIGNAL(socketSendDataSig(QString)), pTab2SocketClient->pSocketClient, SLOT(slotSocketSendData(QString)));
    connect(pTab2SocketClient, SIGNAL(tab3RecvDataSig(QString)), pTab3ControlPannel, SLOT(tab3RecvDataSlot(QString)));
    connect(pTab2SocketClient, SIGNAL(tab4RecvDataSig(QString)), pTab4ChartPlot, SLOT(Tab4RecvDataSlot(QString)));
    connect(pTab2SocketClient, SIGNAL(tab5RecvDataSig(QString)), pTab5Database, SLOT(Tab5RecvDataSlot(QString)));

    ui->pTabWidget->setCurrentIndex(2);
}

MainWidget::~MainWidget()
{
    delete ui;
}

