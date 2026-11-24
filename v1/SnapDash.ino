#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);
  int ledPin = 9;
  pinMode(ledPin, OUTPUT);

  // Start het OLED-scherm
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println("No OLED found check the cables");
    while (true);
    digitalWrite(ledPin, HIGH);
    delay(700);
    digitalWrite(ledPin, LOW);
    delay(700);
    digitalWrite(ledPin, HIGH);
    delay(700);
    digitalWrite(ledPin, LOW);
    delay(700);
    digitalWrite(ledPin, HIGH);
    delay(700);
    digitalWrite(ledPin, LOW);
    delay(700);
    digitalWrite(ledPin, HIGH);
    delay(700);
    digitalWrite(ledPin, LOW);
    delay(700);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  int rawValue = analogRead(A0);
  int timerMinutes = map(rawValue, 0, 4095, 1, 12) * 5;

  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.print("DeskPulse   14C Bewolkt");
  display.drawLine(0, 10, 128, 10, SSD1306_WHITE);

  display.setTextSize(2);
  display.setCursor(15, 22);
  display.print(timerMinutes);
  display.print(" min");

  display.setTextSize(1);
  display.setCursor(0, 52);
  display.print("Draai knop | Druk start");

  display.display();

  delay(100);
}