#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "forma2d.h"
#include <string>

class Triangulo : public Forma2d {
  protected:
    std::string _cor;
    std::string _nome = "triangulo";
    int _aresta1;
    int _aresta2;
    int _aresta3;
  public:
    Triangulo(std::string, int, int, int);
    virtual std::string get_cor() override;
    virtual std::string get_nome() override;
    virtual double get_perimetro() override;
    virtual double get_area() override;
};

#endif
