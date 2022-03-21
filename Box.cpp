#include "Box.h"


// Implement setters and getters
void Box::setDimensions(int pLength, int pWidth, int pHeight){
  length = pLength;
  width = pWidth;
  height = pHeight;
}

int Box::getLength(){
  return height;
}
int Box::getWidth(){
  return width;
} 

int Box::getHeight(){
  return height;
}
 
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
