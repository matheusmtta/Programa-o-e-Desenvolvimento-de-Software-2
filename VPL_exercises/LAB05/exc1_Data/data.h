#ifndef PDS2_VPL_DATA_H
#define PDS2_VPL_DATA_H
#include <string>
class Data{
  private:
    int dia;
    int mes;
    int ano;
  public:
    Data(int, int, int);
    int get_dia();
    int get_mes();
    int get_ano();
    std::string get_data_longo();
    std::string get_data_curto();
};

#endif
