#ifndef PDS2_TWODAYPACKAGE_H
#define PDS2_TWODAYPACKAGE_H

#include "package.h"
#include <string>

class TwoDayPackage : public Package {
  private:
    unsigned int _taxe;
  public:
    TwoDayPackage(unsigned int, unsigned int, unsigned int taxe, std::string, std::string);
    virtual int calculate_cost() override;
};

#endif
