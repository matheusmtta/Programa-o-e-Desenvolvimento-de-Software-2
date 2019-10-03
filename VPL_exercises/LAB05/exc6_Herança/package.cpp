#include "package.h"
#include <string>

Package::Package(unsigned int quant, unsigned int price_per_kg, std::string nome, std::string endereco):
  _quant(quant), _price_per_kg(price_per_kg), _nome(nome), _endereco(endereco) {};

int Package::calculate_cost(){
  return (this->_quant * this->_price_per_kg);
}

unsigned int Package::get_peso(){
    return this->_quant;
}

unsigned int Package::get_custo_por_quilo(){
    return this->_price_per_kg;
}
