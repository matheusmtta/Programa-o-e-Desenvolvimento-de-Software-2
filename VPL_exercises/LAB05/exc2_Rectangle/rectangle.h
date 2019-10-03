#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

/*
 * Para suportar valores padrões. Crie 2 construtores, 1 sem parâmetros e outro
 * com parâmetros.
 */
 class Rectangle{
  private:
    float width;
    float height;
  public:
    Rectangle();
    Rectangle(float, float);
    float get_width();
    float get_height();
    float get_area();
    void set_width(float);
    void set_height(float);
    float get_perimeter();
 };

#endif
