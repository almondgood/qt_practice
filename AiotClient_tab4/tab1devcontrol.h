#ifndef TAB1DEVCONTROL_H
#define TAB1DEVCONTROL_H

#include <QWidget>
#include <QTimer>
#include <QDial>
#include <QButtonGroup>
#include "keyled.h"
namespace Ui {
class Tab1DevControl;
}

class Tab1DevControl : public QWidget
{
    Q_OBJECT

public:
    explicit Tab1DevControl(QWidget *parent = nullptr);
    ~Tab1DevControl();
    QDial* getpDial();

private:
    Ui::Tab1DevControl *ui;
    KeyLed *pKeyLed;
    QTimer *pQTimer;
    QButtonGroup *pQButonGroup;
    QCheckBox * pQCheckBoxArray[8];
    int lcdData;

private slots:
//    void progressBarSetSlot(int);
    void on_pPBappQuit_clicked();
    void on_pPBtimerStart_clicked(bool checked);
    void setValueDaialSlot();
    void on_pCBtimerValue_currentIndexChanged(const QString &arg1);
    void keyCheckBoxSlot(int);
    void keyCheckBoxSlotMouse(int);
};

#endif // TAB1DEVCONTROL_H
