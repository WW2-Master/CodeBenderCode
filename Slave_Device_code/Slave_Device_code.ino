#include <Servo.h>
#include <Wire.h>
Servo myservo;
#define SLAVE_ADDRESS 0x04
int number = 0;
int state = 0;
int pos = 0;


void setup()
{

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
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

}

// unboxes package with number
void receiveData(int byteCount)
{

  while(Wire.available())
  {
    number = Wire.read();
    Serial;
    printf("Data received:");
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  }

  // whatever number is found is run
  if (number == 0)
  {
    digitalWrite(11, HIGH);

  }

  if (number == 1)
   {
    digitalWrite(11, LOW);

   }

  // callback for sending data
  void sendData();

  Wire.write(number);

}


