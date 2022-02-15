# ESP32_miniproj
The code is written for the ESP32 TTGO T-display. This project displays a gradually dropping paragraph of text.

This was a part of a larger collaborative installation at Barnard.

[![Barnard Installation Video](https://img.youtube.com/vi/AR0eMbk_z5M/0.jpg)](https://www.youtube.com/watch?v=AR0eMbk_z5M)


## How to run:

We are using the Arduino IDE. To enable IDE support for the ESP32, first open up Preferences and under "Additional Boards Manager URLs", add the following URL:
```
https://dl.espressif.com/dl/package_esp32_index.json
```
![BoardsManagerURL](https://user-images.githubusercontent.com/6265129/153997561-184baff3-dad6-4699-b3ea-dfbc9214f8ea.jpg)

Then, go to "Tools/Board:/Board Manager" and install ESP32:

![BoardsManager](https://user-images.githubusercontent.com/6265129/153997769-d04a40cc-fc14-4832-a115-e32f032be1a6.jpg)

Then, go to "Tools/Manage Libraries" and search for tft_eSPI. Install it.

![ManageLibs](https://user-images.githubusercontent.com/6265129/153997596-e524be05-fd41-4741-9025-56ad5be9ab33.jpg)

After that, go to "Tools/Board:" and select "TIGO T1".

![BoardSelect](https://user-images.githubusercontent.com/6265129/153997616-e5988c80-6d34-4566-b800-3d8c03f9ffd7.jpg)

Now, simply connect your board and click upload.


## Additional Notes:

If you want to use this in an installation, you can plug in a battery using the JST connector on the back of the ESP32.
