#define LEFT_1 6
#define LEFT_2 7
#define LEFT_E 5


#define RIGHT_1 11
#define RIGHT_2 10
#define RIGHT_E 9

#define SENSOR_R 12
#define SENSOR_L 13

#define NO_LINE 0
#define LINE 1

void setup()
{
	pinMode(LEFT_1, OUTPUT); // motor left 2
	pinMode(LEFT_2, OUTPUT); // motor left 1
	pinMode(LEFT_E, OUTPUT);// Enable Left

	pinMode(RIGHT_1, OUTPUT); // motor Right 1
	pinMode(RIGHT_2, OUTPUT); // motor Right 2
	pinMode(RIGHT_E, OUTPUT); // Enable Right


	pinMode(SENSOR_R, INPUT); //Sensor Rignt
	pinMode(SENSOR_L, INPUT); //Sensor Left
	//------------------------------------------------//

	digitalWrite(5, HIGH);
	digitalWrite(9, HIGH);
}


void loop()
{
	if(digitalRead(13) == HIGH)
	{
		digitalWrite(10, LOW);
		digitalWrite(11, HIGH);
	}
	
	if(digitalRead(13) == LOW)
	{
		digitalWrite(11, LOW);
		digitalWrite(10, HIGH);
	}
//------------------------------------------------//	
	
	if (digitalRead(12) == HIGH)
	{
		digitalWrite(8, LOW);
		digitalWrite(7, HIGH);
	}
	if (digitalRead(12) == LOW)
	{
		digitalWrite(7, LOW);
		digitalWrite(8, HIGH);

	}
}
