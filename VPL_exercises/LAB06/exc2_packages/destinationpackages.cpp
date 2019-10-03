#include "destinationpackages.h"
#include "overnightpackage.h"
#include "package.h"
#include "twodaypackage.h"
#include <map>
#include <string>

void DestinationPackages::add_package(Package *dest){
  std::string nome = package.get_nome();
  pacotes[nome].push_back(g);
}

double DestinationPackages::custo_total(){
  double total = 0;
  for(auto it = pacotes.begin(); it != pacotes.end(); it++)
    for(auto ij = it->second.begin(); ij != it->second.end(); ij++)
      total += (**ij).calculate_cost();
  return total;
}

double DestinationPackages::custo_total(std::string nome){
  double total = 0;
  auto it = mapa.find(nome);
  for(auto it = it->second.begin(); it != it->second.end(); it++)
    total += (**it).calculate_cost();
  return custo;
}
