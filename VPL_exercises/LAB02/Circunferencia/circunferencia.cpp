#include "circunferencia.h"
#include <cmath>
#define PI 3.14

Circunferencia::Circunferencia(double x_val, double y_val, double raio_val){
  y = y_val;
  x = x_val;
  r = raio_val;
}

double Circunferencia::calcular_area(){
  double area;
  area = PI*pow(r, 2.0);
  return area;
}

bool Circunferencia::possui_intersecao(Circunferencia &circ2){
  double deltaX, deltaY, dist;
  deltaX = pow(x - circ2.x, 2);
  deltaY = pow(y - circ2.y, 2);
  dist = sqrt(deltaX-deltaY);

  if (dist < r+circ2.r) return true;
  else return false;
}
