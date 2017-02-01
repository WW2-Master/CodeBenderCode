void setup()
{

	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);

}

void loop()
{
for (int x = 0; x <= 5; x++)
{	
	for (int i = 12; i >= 9; i--)
	{
		digitalWrite(i, HIGH);
		delay(10);
		digitalWrite(9, LOW);
		digitalWrite(10, LOW);
		digitalWrite(11, LOW);
		digitalWrite(12, LOW);
		delay(10);
	}
}
//------------------------------//
	delay(1000);
//------------------------------//
	
for (int x = 0; x <= 5; x++)
{
	for (int i = 9; i <= 12; i++)
	{
		digitalWrite(i, HIGH);
		delay(10);
		digitalWrite(9, LOW);
		digitalWrite(10, LOW);
		digitalWrite(11, LOW);
		digitalWrite(12, LOW);
		delay(10);
	}
}
//------------------------------//
	delay(1000);
//------------------------------//


}
