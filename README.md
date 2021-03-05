# RandPics
Program to display random pics on Watchy hardware based on artsheets

The purpose of this project is to display random artwork on my Watchy hardware at all times. Currently it will randomly display an image form a collection of images and change that image every minute. While it uses the time function of the Watchy hardware, it is not meant to display the time in any way. Users may add that at their discretion.

I used http://javl.github.io/image2cpp/ to generate arduino code for images used in each artsheet.h

Note: I do not own the original artwork, but wrote this as a method to display facsimiles of the images on Watchy hardware. 

RandPics is based on the structure of the Tetris example Watchy watchface and was modified to display images users can add from current artsheet.h or replace with their own. 

Upload the following files as a sketch to Watchy:
artsheet.h
Rand_Pics.cpp
Rand_Pics.h
RandPics.ino

Users can replace the text of artsheet.h and lightly modify the code of Rand_Pics.cpp to display their own images. I will add other themed artsheets in separate folders. Each RP-XXXX is a premade folder for that style art.

The default ArtSheet for RandPics has 41 ratfink style images and takes 89% program memory. I estimate 70-80 possible images at 200x200 could be stored per artsheet.
