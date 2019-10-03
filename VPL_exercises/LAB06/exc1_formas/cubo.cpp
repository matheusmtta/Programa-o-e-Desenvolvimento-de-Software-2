#include "cubo.h"
#include <string>

Cubo::Cubo(std::string cor, int lado):
  _cor(cor), _lado(lado){};

std::string Cubo::get_nome(){
  return this->_nome;
}

std::string Cubo::get_cor(){
  return this->_cor;
}

double Cubo::get_volume(){
  return _lado*_lado*_lado;
}
