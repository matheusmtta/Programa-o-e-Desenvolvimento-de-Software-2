#include "aquecedor.h"

Aquecedor::Aquecedor(){
  this->temperatura = 20;
  this->min_temp = 10;
  this->max_temp = 40;
  this->inc = 5;
}

// Aquecedor::Aquecedor(int temperatura){
//   this->temperatura = temperatura;
//   this->inc = incremento;
//   this->min_temp = 10;
//   this->max_temp = 40;
// }

Aquecedor::Aquecedor(int temperatura, int incremento){
  this->temperatura = temperatura;
  this->inc = incremento;
  this->min_temp = 10;
  this->max_temp = 40;
}


int Aquecedor::get_temperatura(){
  return this->temperatura;
}

void Aquecedor::resfriar(){
  if(temperatura==10) std::cout << "temperatura minima atingida";
  else this->temperatura-=inc;
}

void Aquecedor::aquecer(){
  if(temperatura==40) std::cout << "temperatura maxima atingida";
  else this->temperatura+=inc;
}
