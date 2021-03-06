/*

     Tile mapping demo for
           ESPBoy
         by Jicehel

 --------------------------------

  This prog will display a map
  on the screen (128 x 128 pixels)
  composed of a combination
  of 16 tiles of 8 x 8 pixels
  
*/


// Set delay after plotting the sprite
#define DELAY 20

// Width and height of tile (an element of the map)
#define WIDTH_TILE  8
#define HEIGHT_TILE 8

// Define the number of blocs used
#define X_TILES 16
#define Y_TILES 16

#define NB_TILES 24

// Animation delay between two frames
#define ANIM_FRAME_DELAY 5

#include "image.h"
#include "ESPboyInit.h"

#define Tileset_size 192

ESPboyInit myESPboy;       // Invoke custom library
TFT_eSprite spr = TFT_eSprite(&myESPboy.tft);     // Declare Sprite object "spr" with pointer to "tft" object

uint16_t bit4palette[] = {TFT_BLACK, TFT_GREEN, TFT_RED, TFT_ORANGE, TFT_YELLOW, TFT_BROWN, TFT_BLUE, TFT_PURPLE, TFT_DARKGREY, TFT_WHITE, TFT_CYAN, TFT_MAGENTA, TFT_MAROON, TFT_DARKGREEN, TFT_NAVY, TFT_PINK};

char* table[] = {
  "1112112312111211",
  "2111121411121121",
  "1111111421211211",
  "11211O1311112121",
  "O111111312121111",
  "56665567O1111O12",
  "211121131189A211",
  "112111132FEEEB11",
  "1111112412HEEC21",
  "1112111311GEEC1O",
  "111111141FEEED11",
  "12999A142IJJK121",
  "2FEEEEB311121111",
  "1GEEEEC312111111",
  "1HEEEEC31111O111",
  "21IJJJD311111211"
};


void drawmap() {
  uint8_t nb;
  for(uint8_t i=0; i<Y_TILES; i++) {
    for(uint8_t j=0; j<X_TILES; j++) { 
      nb = table[i][j] - '0';
      if (nb > 10) nb = nb - 7;
      spr.pushSprite(j * WIDTH_TILE, i * HEIGHT_TILE, (nb - 1) * WIDTH_TILE, 0, WIDTH_TILE, HEIGHT_TILE);
    } 
  } 
}


void setup(){
  myESPboy.begin("Tile mapping");   //Set up the display
  spr.setColorDepth(4);
  spr.createPalette(bit4palette); 
  spr.createSprite(Tileset_size, HEIGHT_TILE); // Create a sprite of defined size
  spr.pushImage(0, 0, Tileset_size, HEIGHT_TILE, (uint16_t *)tileset, 16);
  // spr.pushSprite(0,0);
}


void loop(void){
  drawmap();
  delay(DELAY*100);
}     
