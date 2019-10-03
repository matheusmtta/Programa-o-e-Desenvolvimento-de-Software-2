#include "aquecedor.h"

Aquecedor::Aquecedor(){
  this->temperatura = 20;
}

int Aquecedor::get_temperatura(){
  return this->temperatura;
}

void Aquecedor::resfriar(){
  this->temperatura-=5;
}

void Aquecedor::aquecer(){
  this->temperatura+=5;
}
