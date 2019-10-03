#include "quadrado.h"
#include <string>

Quadrado::Quadrado(std::string cor, int lado):
  _lado(lado), _cor(cor) {};

std::string Quadrado::get_cor(){
  return this->_cor;
}

std::string Quadrado::get_nome(){
  return this->_nome;
}

double Quadrado::get_perimetro(){
  return 4*_lado;
}

double Quadrado::get_area(){
  return _lado*_lado;
}
