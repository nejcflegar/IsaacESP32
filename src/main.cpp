#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI(); 
TFT_eSprite sprit = TFT_eSprite(&tft);
TFT_eSprite ozadje = TFT_eSprite(&tft);

int x = 0;
int cas = 0;
void setup() {
  tft.init();  
  tft.setRotation(3);
  
  //
}

void loop() {
 
 
}
