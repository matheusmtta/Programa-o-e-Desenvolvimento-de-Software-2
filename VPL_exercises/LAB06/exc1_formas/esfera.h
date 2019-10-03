#ifndef ESFERA_H
#define ESFERA_H

#include <string>
#include "forma3d.h"

class Esfera : public Forma3d{
  protected:
    int _raio;
    std::string _cor;
    std::string _nome = "esfera";
  public:
    Esfera(std::string, int);
    virtual double get_volume() override;
    virtual std::string get_cor() override;
    virtual std::string get_nome() override;
};

#endif
