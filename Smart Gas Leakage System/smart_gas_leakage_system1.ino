// Smart Gas Leakage Warning System
// Features:
// - Multi-level gas detection
// - LCD status display
// - Live gas sensor values
// - LED warning indicators
// - Buzzer alarm for danger level

#include <Adafruit_LiquidCrystal.h>

int gas = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);

  pinMode(A0, INPUT);

  pinMode(13, OUTPUT); // SAFE LED
  pinMode(12, OUTPUT); // WARNING LED
  pinMode(11, OUTPUT); // DANGER LED

  pinMode(4, OUTPUT);  // BUZZER

  Serial.begin(9600);
}

void loop()
{
  // Read gas sensor value
  gas = analogRead(A0);

  // Print value in serial monitor
  Serial.println(gas);

  // LCD Title
  lcd_1.setCursor(0, 0);
  lcd_1.print("GAS SENSOR    ");

  // SAFE LEVEL
  if (gas >= 307 && gas < 500)
  {
    lcd_1.setCursor(0, 1);
    lcd_1.print("SAFE: ");
    lcd_1.print(gas);
    lcd_1.print("    ");

    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);

    digitalWrite(4, LOW);
  }

  // WARNING LEVEL
  else if (gas >= 500 && gas < 700)
  {
    lcd_1.setCursor(0, 1);
    lcd_1.print("WARNING:");
    lcd_1.print(gas);
    lcd_1.print("   ");

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);

    digitalWrite(4, LOW);
  }

  // DANGER LEVEL
  else if (gas >= 700)
  {
    lcd_1.setCursor(0, 1);
    lcd_1.print("DANGER: ");
    lcd_1.print(gas);
    lcd_1.print("   ");

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);

    digitalWrite(4, HIGH);
  }

  // NO GAS DETECTED
  else
  {
    lcd_1.setCursor(0, 1);
    lcd_1.print("NO GAS: ");
    lcd_1.print(gas);
    lcd_1.print("   ");

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);

    digitalWrite(4, LOW);
  }

  delay(10);
}