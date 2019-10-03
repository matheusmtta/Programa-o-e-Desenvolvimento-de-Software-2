#ifndef CIRCULO_H
#define CIRCULO_H

#include <string>
#include "forma2d.h"

class Circulo : public Forma2d{
  protected:
    float _raio;
    std::string _cor;
    std::string _nome = "circulo";
  public:
    Circulo(std::string, int);
    virtual double get_perimetro() override;
    virtual double get_area() override;
    virtual std::string get_nome() override;
    virtual std::string get_cor() override;
};

#endif
