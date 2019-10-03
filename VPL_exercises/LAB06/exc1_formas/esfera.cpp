#include "esfera.h"
#include <string>
#include <cmath>

Esfera::Esfera(std::string cor, int raio):
  _raio(raio), _cor(cor) {};

double Esfera::get_volume(){
  return 4.0/3.0*(M_PI*_raio*_raio*_raio);
}

std::string Esfera::get_cor(){
  return this->_cor;
}

std::string Esfera::get_nome(){
  return this->_nome;
}
