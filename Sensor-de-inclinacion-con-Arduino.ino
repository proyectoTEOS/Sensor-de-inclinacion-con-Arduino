/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB https://goo.gl/jtiYJy
*/

const int sensorPinT = 2;
int valT;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPinT, INPUT_PULLUP);
}

void loop() {
  valT = digitalRead(sensorPinT);
  if (valT == LOW) {
    Serial.println("1er estado del sensor");
  } else {
    Serial.println("2do estado del sensor");
  }
  delay(1500);
}
