#ifndef LIGNE_HPP_
#define LIGNE_HPP_

#include "FigureGeometrique.hpp"
#include "Point.hpp"

class Ligne:public FigureGeometrique{
private:
  Point _p0;
  Point _p1;
public:
  Ligne();
};

//void afficher() const;

//const Point & getP0() const;
//const Point & getP1() const;

#endif
