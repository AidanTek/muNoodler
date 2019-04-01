# Notes on using the Arduino IDE with the µNoodler

## Native Usb

To send data over serial back to a computer, use the SerialUSB object in place of Serial. For example:

```cpp
SerialUSB.begin(115200);
SerialUSB.println("Hello World!");
```
