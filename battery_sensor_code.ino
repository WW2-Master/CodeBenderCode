
#define R1 100;
#define R2 10;



float readVoltage(int k)
{
  int sensorValue = analogRead(k);
  float voltage = sensorValue * (1.1 / 1023.0);
  float Vin =(100+10);
  Vin = Vin /10*voltage;
  return Vin;
}

void setup()
{
  analogReference(INTERNAL);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
float c=readVoltage(0);// all of them
float b=readVoltage(1);// 2 and 1
float a=readVoltage(2);// just one, the first
  
  b=b-a;
  c=c-b-a;
  Serial.print(a);
  Serial.print('\t');
  Serial.print(b);
  Serial.print('\t');
  Serial.print(c);
  Serial.println();
  delay(100);


}

/* int sensorValue2 = analogRead(A2);
 	    float voltage2 = sensorValue2 * (1.1 / 1023.0);
 Serial.print(voltage2);
 Serial.print("_");
 delay(100);
 
 
 int sensorValue1 = analogRead(A1);
 	    float voltage1 = sensorValue1 * (1.1 / 1023.0);
 Serial.print(voltage1);
 Serial.print("_");
 delay(100);
 */

