// C++ code
//
int LightSensorValue = 0;

int lightbulb = 0;

int streetlight1 = 0;

int streetlight2 = 0;

void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  LightSensorValue = analogRead(A5);
  Serial.println(LightSensorValue);
  if (LightSensorValue < 200) {
    analogWrite(3, 255);
    analogWrite(5, 255);
  } else {
    if (LightSensorValue < 300) {
      analogWrite(3, 190);
      analogWrite(5, 190);
    } else {
      if (LightSensorValue < 500) {
        analogWrite(3, 100);
        analogWrite(5, 100);
      } else {
        digitalWrite(3, LOW);
        digitalWrite(5, LOW);
      }
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}