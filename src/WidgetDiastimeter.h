#ifndef WIDGET_DIASTIMETER_H_
#define WIDGET_DIASTIMETER_H_

#include "application.h"


class WidgetDiastimeter
{
public:
    WidgetDiastimeter(uint8_t ucItem = 0);
    ~WidgetDiastimeter();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayDistance(float distance);

private:
    char pDataDistanceTopic[64];
    uint8_t _Item=0;         
};

#endif
