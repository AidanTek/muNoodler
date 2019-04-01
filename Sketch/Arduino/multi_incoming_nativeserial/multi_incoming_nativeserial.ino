/*
 * Capture incoming serial messages from a computer
 * over the native serial port
 * 
 * Use SerialUSB in place of Serial
 */

void setup() {
  // Open the native Serial port
  SerialUSB.begin(115200);
  
}

void loop() {
  // Check for incoming serial messages
  if(SerialUSB.available()) {
    // Write into a variable:
    uint16_t value1 = SerialUSB.read();
    uint16_t value2 = SerialUSB.read();
    uint16_t value3 = SerialUSB.read();

    // Print it to the Serial Monitor:
    SerialUSB.print(value1); SerialUSB.print(" ");
    SerialUSB.print(value2); SerialUSB.print(" ");
    SerialUSB.println(value3);
  } // End of serial block
}
