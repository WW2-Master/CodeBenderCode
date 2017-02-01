
#define pinServo 8
#include <DS1302.h>
#include <LiquidCrystal.h>
DS1302 rtc(8, 7, 6);
int a;
Time x;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{

	pinMode(10, INPUT);

	pinMode(9, OUTPUT);


	rtc.halt(false);
	rtc.writeProtect(false);


	Serial.begin(9600);


	rtc.setDOW(FRIDAY);   
	rtc.setTime(3, 30 , 0);    
	rtc.setDate(6, 10, 2016); 
	lcd.begin(16, 2);

}

void loop()
{
	a = digitalRead(10);
	if((x.hour == 3) && (x.min == 31))
	{
		digitalWrite(9, HIGH);
		//	delay(5000);
	}
	if((x.hour == 3) && (x.min == 32))
	{
		digitalWrite(9, LOW);
		//	delay(5000);
	}



	// Send Day-of-Week
	Serial.print(rtc.getDOWStr());
	Serial.print(" ");

	// Send date
	Serial.print(rtc.getDateStr());
	Serial.print(" -- ");

	// Send time
	Serial.println(rtc.getTimeStr());

	x = rtc.getTime();
	Serial.println(x.sec);
	
	delay (1000);

	
	if(a == HIGH)
	{
		lcd.setCursor(0, 0);
		lcd.print(x.hour);
		lcd.print(":");
		lcd.print(x.min);


		lcd.setCursor(0, 1);
		lcd.print(x.date);
		lcd.print("/");
		lcd.print(x.mon);
		lcd.print("/");
		lcd.print(x.year);
	}
	if(a == LOW)
	{
		lcd.setCursor(0, 0);
		lcd.print("Feed time:10:00AM");
		delay(2000);
		lcd.print("                    ");
lcd.clear();
	}






}


