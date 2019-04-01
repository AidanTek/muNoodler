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
    uint16_t value = SerialUSB.read();

    // Print it to the Serial Monitor:
    SerialUSB.println(value);
  } // End of serial block
}
