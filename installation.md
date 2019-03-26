# Installation Guide

## Arduino

The current board bootloader is based on the Arduino/Genuino Zero, I have a modified board installer which can be accessed from this repository, it works but I haven't added the extra pins that I have broken out on my hardware just yet

* Open Arduino
* Open the Preferences 
* In 'Additional Boards Manager URLs' add the following line (if you already have some text in there, put a comma at the end then past it in):

```
https://raw.githubusercontent.com/AidanTek/muNoodler/master/ElectricNoodleBox/package_munoodler_index.json
```

* Now click ok, navigate to **Tools>Board>Boards Manager...**
* Type mu in the search criteria, you should see the Electric Noodle Box board installer pop up - click install

That's it - now you can select the board from the **Tools>Boards>** menu, try uploading blink to the board

# Circuit Python

The board can easily be configured for Circuit Python, guide to follow!
