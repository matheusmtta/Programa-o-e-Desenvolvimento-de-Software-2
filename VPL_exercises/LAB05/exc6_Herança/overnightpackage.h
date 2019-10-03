#ifndef PDS2_OVERNIGHTPACKAGE_H
#define PDS2_OVERNIGHTPACKAGE_H

#include "package.h"
#include <string>

class OverNightPackage : public Package {
  private:
    unsigned int _taxe;
  public:
    OverNightPackage(unsigned int, unsigned int, unsigned int taxe, std::string, std::string);
    virtual int calculate_cost() override;
};

#endif
