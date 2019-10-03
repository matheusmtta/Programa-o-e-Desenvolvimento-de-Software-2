#include "data.h"
#include <string>

Data::Data(int dia, int mes, int ano){
  this->dia=dia;
  this->mes=mes;
  this->ano=ano;
}

int Data::get_dia(){
  return this->dia;
}

int Data::get_mes(){
  return this->mes;
}

int Data::get_ano(){
  return this->ano;
}

std::string Data::get_data_curto(){
  std::string r = (std::to_string(this->dia)+"/"+std::to_string(this->mes)+"/"+std::to_string(this->ano));
  return r;
}

std::string Data::get_data_longo(){
  std::string months[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
  return (std::to_string(this->dia) + " de " + months[this->mes-1] + " de " + std::to_string(this->ano));
}
