#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    this->resize(600, 450);
    pTabSocket = new TabSocket(ui->pTabSocket);
    ui->pTabSocket->setLayout(pTabSocket->layout());

    pTabSensor = new TabSensor(ui->pTabSensor);
    ui->pTabSensor->setLayout(pTabSensor->layout());

    pTabSqlite = new TabSqlite(ui->pTabSqlite);
    ui->pTabSqlite->setLayout(pTabSqlite->layout());


    connect(pTabSocket, SIGNAL(tab4RecvDataSig(QString)), pTabSensor, SLOT(Tab4RecvDataSlot(QString)));
    connect(pTabSocket, SIGNAL(tab5RecvDataSig(QString)), pTabSqlite, SLOT(Tab5RecvDataSlot(QString)));

    ui->pTabWidget->setCurrentIndex(0);
}

MainWidget::~MainWidget()
{
    delete ui;
}

