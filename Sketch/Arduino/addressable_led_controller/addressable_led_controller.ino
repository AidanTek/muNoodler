/*
 * This is an addressable LED controller designed to
 * work with the Max/MSP MultiSerialOutput sketch
 * 
 * This sketch requires the FastLED.h library which 
 * can be installed from the library manager in the
 * Sketch > Include Library menu
 */

#include <FastLED.h>

const uint8_t totalleds = 8; // How many LEDs are connected
const uint8_t datapin = 9; // Which pin are you connected to?

// Instance of the CRGB class (part of FastLED)
CRGB leds[totalleds];

// A function for updating the LEDs:
void setPixel(uint16_t pixel, uint8_t r, uint8_t g, uint8_t b) {
  leds[pixel].r = r;
  leds[pixel].g = g;
  leds[pixel].b = b;

   FastLED.show();
}

void setup() {
  // Open the native Serial port
  SerialUSB.begin(115200);

  // LED setup function:
  FastLED.addLeds<WS2812, datapin, GRB>(leds, totalleds);
  
}

void loop() {
  static uint8_t red;
  static uint8_t green;
  static uint8_t blue;
  
  // Check for incoming serial messages
  if(SerialUSB.available()) {
    // Write into a variable:
    red = SerialUSB.read();
    green = SerialUSB.read();
    blue = SerialUSB.read();

    // Optionally, print it to the Serial Monitor:
    SerialUSB.print(red); SerialUSB.print(" ");
    SerialUSB.print(green); SerialUSB.print(" ");
    SerialUSB.println(blue);

    // Update the LEDs!
    for(uint16_t n = 0; n < totalleds; n++) {
      setPixel(n, red, green, blue);
    }
  } // End of serial block

}
