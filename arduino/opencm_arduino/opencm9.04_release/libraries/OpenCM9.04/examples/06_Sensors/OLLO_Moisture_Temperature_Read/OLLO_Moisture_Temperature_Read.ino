/* OLLO Moisture Temperature Sensor Read 

 connect Moisture Temperature Sensor Module to port 2.
 
 You can buy Temperature Sensor (TMS-10) in ROBOTIS-SHOP
 https://goo.gl/S8EpNq
 www.robotis-shop-kr.com/?act=shop.goods_view&GS=2571&GC=GD010201
 
 You can also find all information 
 http://support.robotis.com/
 
                  Compatibility
 CM900                  X
 OpenCM9.04             O
 
 created 14 Aug 2017
 by ROBOTIS CO,.LTD.
 */

#include <OLLO.h>
OLLO myOLLO;

void setup(){
  
  // !!! Only port 2 and 3 supports Moisture Temperature Sensor.
  
  myOLLO.begin(2, MOISTURE_TEMPERATURE_SENSOR);//Temperature Module must be connected at port 2.
}
void loop(){
  SerialUSB.print("Temperature = ");
  SerialUSB.print(myOLLO.read(2, MOISTURE_TEMPERATURE_SENSOR)); //read temperature value from OLLO port 2
  SerialUSB.print("    ");
  delay(30);
  SerialUSB.print("Moisture Percentage = ");
  SerialUSB.println(myOLLO.read(2, MOISTURE_SENSOR)); //read moisture percentage value from OLLO port 2
  delay(30);
}



