/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
测距仪：测量障碍物距离

所需器件:
1.HC-SR04超声传感器模块

接线说明:
HC-SR04                      Atom
1.VCC                        +5V
2.GND                        GND
3.Trig                        D0
4.Echo                        D1
*/

#include <HC_SR04.h>
#include <WidgetDiastimeter.h>

#define TRIPIN    D0 //发送管脚
#define ECHOPIN   D1 //接收管脚

WidgetDiastimeter diastimeter = WidgetDiastimeter();

HC_SR04 rangefinder = HC_SR04(TRIPIN, ECHOPIN);

void setup()
{
	rangefinder.begin(); //初始化
}

void loop()
{
	if(rangefinder.getDistanceCM() >= 0)
	{
		//把测量得到的距离数据发送到云平台
		diastimeter.displayDistance(rangefinder.getDistanceCM());
	}

	delay(3000);
}
