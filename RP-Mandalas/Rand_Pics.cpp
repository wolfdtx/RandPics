#include "Rand_Pics.h"
#include <stdlib.h>     //srand, rand

//Mandalas Artsheet 
const unsigned char *art_sheet [39] = {away, butterf, butterfly, color, columns, crude, dir, elephant, entrance, flame, flight, flor, floral, flowers, geometric, giraffe, henna, hiway, intricate, inward, irish, leaf, lion, quick, lotus, mono, moon, night, om, roundish, seventysix, simple, star, stave, tropic, turt, water, wolf, yinyang};


RandPics::RandPics(){} //constructor

void RandPics::drawWatchFace(){
    display.fillScreen(GxEPD_BLACK);
    srand(currentTime.Hour * currentTime.Wday * currentTime.Month); //seeds rand() with the current hour/day/month causing watchy to display a new random image each hour
    //change the % after rand() to the size of *art_sheet []
    display.drawBitmap(0, 0, art_sheet[(rand() % 39)], DISPLAY_WIDTH, DISPLAY_HEIGHT, GxEPD_WHITE); //draws a random image from *art_sheet [] full size
}
