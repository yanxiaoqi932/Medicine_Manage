#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton:public QPushButton
{
    Q_OBJECT
public:
    MyPushButton();
    void zoom1();
    void zoom2();
};

#endif // MYPUSHBUTTON_H
