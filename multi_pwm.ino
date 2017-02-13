void setup() {
  pinMode( 9, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode( 3, OUTPUT);
  pinMode(11, OUTPUT);

  analogWrite( 9, 10); // 9, 10 uses Timer1
  analogWrite(10, 10);

  analogWrite( 3, 10); // 3, 11 uses Timer2
  analogWrite(11, 10);
}

void loop() {
  OCR1A = OCR1B = OCR2A = OCR2B = 0;
  delay(500);
  OCR1A = OCR1B = OCR2A = OCR2B = 64;
  delay(500);
  OCR1A = OCR1B = OCR2A = OCR2B = 255;
  delay(500);
}
