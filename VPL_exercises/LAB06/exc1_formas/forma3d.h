#ifndef FORMA3D_H
#define FORMA3D_H

#include "forma.h"

class Forma3d : public Forma{
  public:
    virtual double get_volume() =  0;
};

#endif
