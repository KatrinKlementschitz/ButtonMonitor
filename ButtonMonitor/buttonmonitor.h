#ifndef BUTTONMONITOR_H
#define BUTTONMONITOR_H

#include "ui_buttonmonitor.h"

const int B1 = 17;
const int B2 = 27;
const int B3 = 22;
const QVector<int> Butn = {B1, B2, B3};
const int T_UPDATE = 100;

class ButtonMonitor : public QWidget, private Ui::ButtonMonitor
{
    Q_OBJECT

public:
    explicit ButtonMonitor(QWidget *parent = 0);
private slots:
    void updateValue();
};

#endif // BUTTONMONITOR_H
