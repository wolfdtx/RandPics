#include "Rand_Pics.h"
#include <stdlib.h>     //srand, rand

//Ratfink Artsheet 
const unsigned char *art_sheet [41] = {bigbad, board, bounty, bugeye, burbank, carriage, cyclops, draglover, dust, facefink, flies, goopy, greenie, gumfoot, hangten, hungergames, hungry, killervette, leader, loverboy, lowrider, magicman, motorcycho, painter, pc, piston, portrait, rager, ratfinger, ratfink, ratrod, rats, ratshole, ridin, scoff, shoeboxjeff, sketchy, slobber, triclops, vw, wildchild};

RandPics::RandPics(){} //constructor

void RandPics::drawWatchFace(){
    display.fillScreen(GxEPD_BLACK);
    srand(currentTime.Minute); //seeds rand() with the current minute causing watchy to display a new random image once per minute
    //change the % after rand() to the size of *art_sheet []
    display.drawBitmap(0, 0, art_sheet[(rand() % 41)], DISPLAY_WIDTH, DISPLAY_HEIGHT, GxEPD_WHITE); //draws a random image from *art_sheet [] full size
}
