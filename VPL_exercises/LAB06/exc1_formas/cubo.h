#ifndef CUBO_H
#define CUBO_H

#include <string>
#include "forma3d.h"

class Cubo : public Forma3d{
  protected:
    std::string _nome = "cubo";
    std::string _cor;
    int _lado;
  public:
    Cubo(std::string, int);
    virtual std::string get_nome() override;
    virtual double get_volume() override;
    virtual std::string get_cor() override;
};

#endif
