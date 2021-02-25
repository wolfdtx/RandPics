#include "Rand_Pics.h"
#include <stdlib.h>     //srand, rand

//Akira Artsheet 
const unsigned char *art_sheet [55] = {eightbit, akira, away, backcover, bandage, bike, black, bloom, boom, capsule, chief, dash, dead, divebike, drawbike, drawing, embrace, garage, gargoyle, george, grimace, gun, gun2, handlogo, kaneda, kanedabike, kid, king, logo, modern, myhand, pills, pin, profilebike, recline, sarge, sass, schema, shotaro, sidebike, sketch, slide, stance, straddle, streaks, stride, swallowpill, tandem, tetsuo, tetsuoascendant, tetsuotrails, towards, trails, trike, wireframe};

RandPics::RandPics(){} //constructor

void RandPics::drawWatchFace(){
    display.fillScreen(GxEPD_BLACK);
    srand(currentTime.Minute); //seeds rand() with the current minute causing watchy to display a new random image once per minute
    //change the % after rand() to the size of *art_sheet []
    display.drawBitmap(0, 0, art_sheet[(rand() % 55)], DISPLAY_WIDTH, DISPLAY_HEIGHT, GxEPD_WHITE); //draws a random image from *art_sheet [] full size
}
