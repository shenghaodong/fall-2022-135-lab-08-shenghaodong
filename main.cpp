#include <iostream>

#include "imageio.h"
//THIS IS JUST FOR TESTING MAKE A CPP FOR EACH PART LATER (FOR EACH FUNC STILL USE THIS)

int main()
{

  std::string input = "testA.pgm";
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); // read it from the file "inImage.pgm"
  // h and w were passed by reference and
  // now contain the dimensions of the picture
  // and the 2-dimesional array img contains the image data
  
  // Now we can manipulate the image the way we like
  // for example we copy its contents into a new array
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = img[row][col];
    }
  }

  for(int row = 0; row < h; row++) {
    for(int col = w/2; col < w; col++) {
      out[row][col] = 255 - out[row][col];
    }
  }
 
  
  // and save this new image to file "outImage.pgm"
  writeImage("testB.pgm",out, h, w);

  
  return 0;
}

//   Part A:
//   for(int row = 0; row < h; row++) {
//     for(int col = 0; col < w; col++) {
//       out[row][col] = 255 - out[row][col];
//     }
//   }


/*
Part B:
for(int row = 0; row < h; row++) {
    for(int col = w/2; col < w; col++) {
      out[row][col] = 255 - out[row][col];
    }
  }


*/