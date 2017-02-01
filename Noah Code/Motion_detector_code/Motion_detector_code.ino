int pirPin = 12;
int pirVal;
void setup()
{

	pinMode(7, OUTPUT);

	pinMode(12, INPUT);


}
void loop()
{

	pirVal =  digitalRead(pirPin);
	if (pirVal == LOW)
	{
		digitalWrite(7, LOW);

		delay(1000);



	}

	else
	{
		digitalWrite(7, HIGH);
		
	}




}
