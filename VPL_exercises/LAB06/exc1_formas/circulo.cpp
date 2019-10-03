#include "circulo.h"
#include <cmath>
#include <string>

Circulo::Circulo(std::string cor, int raio):
  _cor(cor), _raio(raio) {};

std::string Circulo::get_cor(){
  return this->_cor;
}

double Circulo::get_area(){
  return M_PI*(this->_raio*this->_raio);
}

double Circulo::get_perimetro(){
  return 2.0*M_PI*this->_raio;
}

std::string Circulo::get_nome(){
  return this->_nome;
}
