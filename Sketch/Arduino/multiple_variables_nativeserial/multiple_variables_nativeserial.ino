/* 
 *  Send multiple values like a list over the native
 *  serial port.
 *  
 *  Use SerialUSB in place of Serial.
 */

void setup() {
  SerialUSB.begin(115200);
  randomSeed(analogRead(A0));
}

void loop() {
  uint16_t rand_a = random(1000);
  uint16_t rand_b = random(1000);
  SerialUSB.print(rand_a);
  SerialUSB.print(" ");
  SerialUSB.println(rand_b);
  delay(500);
}
