#ifndef QUADRADO_H
#define QUADRADO_H

#include "forma2d.h"
#include <string>

class Quadrado : public Forma2d{
  protected:
    std::string _cor;
    std::string _nome = "quadrado";
    int _lado;
  public:
    Quadrado(std::string, int);
    virtual double get_perimetro() override;
    virtual double get_area() override;
    virtual std::string get_cor() override;
    virtual std::string get_nome() override;
};

#endif
