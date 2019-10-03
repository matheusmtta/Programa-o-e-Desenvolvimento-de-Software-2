#include "rectangle.h"

Rectangle::Rectangle(){
  this->width = 1;
  this->height = 1;
}

Rectangle::Rectangle(float width, float height){
  this->width = width;
  this->height = height;
}

float Rectangle::get_width(){
  return this->width;
}

float Rectangle::get_height(){
  return this->height;
}

float Rectangle::get_area(){
  return this->height*this->width;
}

void Rectangle::set_height(float height){
  this->height = height;
}

void Rectangle::set_width(float width){
  this->width = width;
}

float Rectangle::get_perimeter(){
  return (2*this->width)+(2*this->height);
}
