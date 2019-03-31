/* 
 *  Produce a random number from a seed generated by
 *  noise on an analog input.
 *  
 *  Send that number using the native usb serial port.
 *  
 *  Use SerialUSB in place of Serial.
 */

void setup() {
  SerialUSB.begin(115200);
  randomSeed(analogRead(A0));
}

void loop() {
  uint16_t rand_n = random(1000);
  SerialUSB.println(rand_n);
  delay(500);
}