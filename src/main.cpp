#include <TFT_eSPI.h>
#include <SPI.h>
#include "OzadjeBase.h"

TFT_eSPI tft = TFT_eSPI(); 
TFT_eSprite sprit = TFT_eSprite(&tft);
TFT_eSprite ozadje = TFT_eSprite(&tft);
TFT_eSprite priloga = TFT_eSprite(&tft);

int x = 0;
int cas = 0;
void setup() {
  tft.init();  
  tft.setRotation(3);
  
  ozadje.createSprite(238,240);
  ozadje.setSwapBytes(1);
  ozadje.pushImage(0,0,238,240,ozdajeBase);
  ozadje.pushSprite(0,0);

  priloga.createSprite(82,240);
  priloga.fillSprite(TFT_BLACK);
  priloga.pushSprite(238,0);

  
}

void loop() {
 
 
}
