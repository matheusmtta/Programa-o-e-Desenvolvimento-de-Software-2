#include <iostream>
#include <string>
#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"

int main(){
    Package teste1 = Package(2,3,"Carlos", "Bahia");
    TwoDayPackage teste2 = TwoDayPackage(2,3, 2 , "Carlos", "Bahia");
    OverNightPackage teste3 = OverNightPackage(2,3, 2, "Carlos", "Bahia");
    std::cout << teste1.calculate_cost() << std::endl;
    std::cout << teste2.calculate_cost() << std::endl;
    std::cout << teste3.calculate_cost() << std::endl;
    return 0;
}
