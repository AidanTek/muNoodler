# Notes on Max/MSP usage

## Serial Connection

I haven't found a fool proof way of getting a serial port to open reliably. YMMV, once you are connected, things tend to work as expected. Some quick notes if you are having problems:

* Unplug and reconnect the USB lead between the computer and µNoodler
* Check the serial port list in Max/MSP
* Edit the serial object (even if you have nothing to change, just editing it seems to update it!)
* Do not open the Serial Monitor in the Arduino IDE until you have covered the previous steps
