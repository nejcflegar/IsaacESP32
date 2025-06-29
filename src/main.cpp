#include <TFT_eSPI.h>
#include <Arduino.h>
#include "ozadjeStuff.h"
#include "ozadjeBase.h"
#include "vrataDefault.h"
#include "isaacGlava.h"
#include "body.h"


TFT_eSPI tft = TFT_eSPI();
TFT_eSprite ozadje = TFT_eSprite(&tft);
TFT_eSprite IsaacGlava = TFT_eSprite(&tft);
TFT_eSprite IsaacBody = TFT_eSprite(&tft);
TFT_eSprite vrata = TFT_eSprite(&tft);

void setup(){
  tft.init();
  tft.setRotation(3);

  OzadjeSpechs* OzaST = new OzadjeSpechs();
  ozadje.createSprite(238,240);
  ozadje.setSwapBytes(true);
  ozadje.pushImage(0,0,238,240,ozdajeBase);
  
  IsaacBody.createSprite(32,32);
  IsaacBody.setSwapBytes(false);
  IsaacBody.pushImage(0,0,32,32,telo[0]);
  IsaacBody.pushToSprite(&ozadje,100,100,TFT_WHITE);

  IsaacGlava.createSprite(32,32);
  IsaacGlava.setSwapBytes(false);
  IsaacGlava.pushImage(0,0,32,32,glava[0]);
  IsaacGlava.pushToSprite(&ozadje,100,80,TFT_GREEN);

  vrata.createSprite(20,20);
  vrata.setSwapBytes(false);
  vrata.pushImage(0,0,20,20,vrataDefault[0]);
  vrata.pushToSprite(&ozadje,100,0,TFT_WHITE);

  ozadje.pushSprite(0,0);
  tft.fillRect(150,0,32,32,TFT_GREEN);
}

void loop() {

}
