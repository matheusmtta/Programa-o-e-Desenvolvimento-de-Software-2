#include <string>
#include "overnightpackage.h"

OverNightPackage::OverNightPackage(unsigned int quant, unsigned int price_per_kg, unsigned int taxe,
                             std::string nome, std::string endereco):
Package(quant, price_per_kg, nome, endereco), _taxe(taxe){};

int OverNightPackage::calculate_cost(){
  return (this->_quant * (this->_price_per_kg+this->_taxe));
}
