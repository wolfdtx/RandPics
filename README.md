# RandPics
Program to display random pics on Watchy hardware based on artsheets

I used http://javl.github.io/image2cpp/ to generate arduino code for images used in each artsheet.h

Note: I do not own the original artwork, but wrote this as a method to display facsimiles of them on Watchy hardware. 

RandPics is based on the structure of the Tetris example Watchy watchface and was modified to display images users can add from current artsheet.h or replace with their own. 

The required files are:
artsheet.h
Rand_Pics.cpp
Rand_Pics.h
RandPics.ino

Users can replace the text of artsheet.h and lightly modify the code of Rand_Pics.cpp to display their own images. I will add other themed artsheets in a separate folder /ThemedArtsheets
