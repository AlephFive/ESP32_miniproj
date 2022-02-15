#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

const char *myText[] = { "ESP32", "is", "a", "series", "of", "low-cost", "low-power", "system", "on", "a", 
    "chip", "microcontrollers", "with", "integrated", "Wi-Fi", "and", "dual-mode", "Bluetooth", "The", "ESP32", 
    "series", "employs", "either", "a", "Tensilica", "Xtensa", "LX6", "microprocessor", "in", "both", "dual-core", 
    "and", "single-core", "variations", "Xtensa", "LX7", "dual-core", "microprocessor", "or", "a", "single-core", "RISC-V", 
    "microprocessor", "and", "includes", "built-in", "antenna", "switches", "RF", "balun", "power", "amplifier", "low-noise",
    "receive", "amplifier", "filters", "and", "power-management", "modules", "ESP32", "is", "created", "and", "developed", 
    "by", "Espressif", "Systems", "a", "Shanghai-based", "Chinese", "company", "and", "is", "manufactured", "by", "TSMC", "using", 
    "their", "40 nm", "process", "It", "is", "a", "successor", "to", "the", "ESP8266", "microcontroller" };


int dly = 10;

int16_t w = 128;
int16_t h = 160;


int16_t text_x = 2;
int16_t text_y = 2;

int16_t text_dx = 1;
int16_t text_dy = 0;

void setup() {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK);

  tft.setTextColor(TFT_YELLOW, TFT_BLACK);

}

bool hasText = false;

int currTextIndex = 0;
String currText;


void loop() {
  // put your main code here, to run repeatedly:
  delay(30);

  if(!hasText){
    //spawn new text
    tft.fillScreen(TFT_BLACK);
    hasText = true;

    text_x = 40;
    text_y = 0;

    text_dx = 0;
    text_dy = 4;


    if(currTextIndex >= (sizeof(myText) / sizeof(myText[0]))){
      currTextIndex = 0;  
    }


    //tft.drawString("hello",text_x,text_y,6);
    tft.setCursor(text_x, text_y);
    tft.print(myText[currTextIndex]);

    currText = myText[currTextIndex];


    
    
    currTextIndex++;
      
  }
  else{
    //move the text  

    tft.fillScreen(TFT_BLACK);

    if(text_y > 240){
      //out of bounds
      hasText = false;
    }
    else{
      text_x = text_x + text_dx;
      text_y = text_y + text_dy;

      tft.setCursor(text_x, text_y);
      tft.print(currText);
      //tft.drawString("hello3",text_x,text_y,6);
    }
    
    
  }



  
  
}
