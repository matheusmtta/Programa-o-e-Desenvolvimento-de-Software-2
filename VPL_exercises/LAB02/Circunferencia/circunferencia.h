struct Circunferencia{
  //Data
  double y;
  double x;
  int r;

  //Constructor
  Circunferencia(double x_val, double y_val, double raio_val);

  //Operações
  double calcular_area();
  bool possui_intersecao(Circunferencia &circ2);
};
