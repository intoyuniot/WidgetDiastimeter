
#include "WidgetDiastimeter.h"


WidgetDiastimeter::WidgetDiastimeter(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataDistanceTopic,0,sizeof(pDataDistanceTopic));
    sprintf(pDataDistanceTopic,"channel/diastimeter_%d/data/distance",_Item);
}

WidgetDiastimeter::~WidgetDiastimeter()
{
}

void WidgetDiastimeter::begin(void (*UserCallBack)(void))
{
}

void WidgetDiastimeter::displayDistance(float distance)
{
	IntoRobot.publish(pDataDistanceTopic,distance);
}









