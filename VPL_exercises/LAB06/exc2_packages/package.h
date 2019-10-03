#ifndef PDS2_PACKAGE_H
#define PDS2_PACKAGE_H

#include <string>

class Package {
  protected:
    std::string _nome;
    std::string _endereco;
    unsigned int _quant;
    unsigned int _price_per_kg;
  public:
    Package(unsigned int, unsigned int, std::string, std::string);
    virtual int calculate_cost();
    unsigned int get_peso();
    unsigned int get_custo_por_quilo();
    std::string get_nome();
};

#endif
