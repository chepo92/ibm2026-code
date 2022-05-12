# 1 "C:\\Users\\Axel\\AppData\\Local\\Temp\\tmp1581dyv2"
#include <Arduino.h>
# 1 "D:/Git/IBM2026 tutorial/1 Blink/src/main.ino"
# 26 "D:/Git/IBM2026 tutorial/1 Blink/src/main.ino"
void setup();
void loop();
#line 26 "D:/Git/IBM2026 tutorial/1 Blink/src/main.ino"
void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}