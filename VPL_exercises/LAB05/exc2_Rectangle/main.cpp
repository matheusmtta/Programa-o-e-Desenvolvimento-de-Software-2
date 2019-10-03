#include <iostream>
#include "rectangle.h"

int main(){

  Rectangle r1, r2;
  r1 = Rectangle();
  r2 = Rectangle(2,2);
  std::cout << r1.get_height() << std::endl;
  std::cout << r1.get_width() << std::endl;
  std::cout << r1.get_area() << std::endl;
  std::cout << r2.get_height() << std::endl;
  std::cout << r2.get_width() << std::endl;
  std::cout << r2.get_area() << std::endl;
  std::cout << r2.get_perimeter() << std::endl;
  return 0;
}
