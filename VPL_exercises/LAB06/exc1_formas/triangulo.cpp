#include <string>
#include "triangulo.h"
#include <cmath>

Triangulo::Triangulo(std::string cor, int aresta1, int aresta2, int aresta3):
  _cor(cor), _aresta1(aresta1), _aresta2(aresta2), _aresta3(aresta3){};

std::string Triangulo::get_cor(){
  return this->_cor;
}

std::string Triangulo::get_nome(){
  return this->_nome;
}

double Triangulo::get_area(){
  return 0.5*(this->_aresta1*this->_aresta2)*sin(this->_aresta3);
}

double Triangulo::get_perimetro(){
  return this->_aresta1+this->_aresta2+this->_aresta3;
}
