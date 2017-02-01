#include <Servo.h>
#include <Wire.h>
Servo myservo;
#define SLAVE_ADDRESS 0x04
int number = 0;
int state = 0;
int pos = 0;

void setup()
{
	//myservo.attach(9);
        pinMode(10, OUTPUT);
        pinMode(9, OUTPUT);	
        pinMode(13, INPUT);
	Serial.begin(9600); // start serial for output
// initialize i2c as slave device
	Wire.begin(SLAVE_ADDRESS);

// define callbacks for i2c communication
	Wire.onReceive(receiveData);


	Serial;
	printf("Ready");
}

void loop()
{
	delay(100);
}

// unboxes package with number
void receiveData(int byteCount)
{

	while(Wire.available())
	{
		number = Wire.read();
		Serial;
		printf("Data received:");

	}

// whatever number is found is run
	if (number == 0)
	{
        digitalWrite(11, HIGH);
        digitalWrite(9, HIGH); // set the LED on
        digitalWrite(10, LOW);
        delay(4500000);
        digitalWrite(9, LOW); // set the LED on
        digitalWrite(10, LOW);
}

	if (number == 1)
	{
	digitalWrite(11, LOW);

	}

	if (number == 2)
	{

		digitalWrite(9, HIGH); // set the LED on
        delay(10);
		digitalWrite(9, LOW); // set the LED on

	}

	if (number == 3)
	{
		digitalWrite(12, LOW); // set the LED on
           delay(10);
		digitalWrite(12, LOW); // set the LED on
	}

	if (number == 4)
	{

		digitalWrite(12, LOW); // set the LED on
	}



// callback for sending data
	void sendData();

	Wire.write(number);

}
