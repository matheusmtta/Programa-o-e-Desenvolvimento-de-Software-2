#ifndef PDS2_DESTINATIONPACKAGE_H
#define PDS2_DESTINATIONPACKAGE_H
#include "package.h"
#include <string>

class DestinationPackages {
  protected:
    std::map<std::string, std::vector<*Package> > pacotes;
  public:
    void add_package(*Package);
    double custo_total();
    double custo_total(std::string);
};

#endif
