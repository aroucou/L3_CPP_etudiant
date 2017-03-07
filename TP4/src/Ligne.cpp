#include "Ligne.hpp"
#include <iostream>


Ligne::Ligne(const Couleur & couleur, const Point & p0, const Point & p1) :
//  Couleur(_r,_g,_b),_p0(_x,_y),_p1(_x,_y)
FigureGeometrique(couleur),_p0(p0),_p1(p1)
{}

//void Ligne::afficher() const {
//  std::cout << _nom << _age << std::endl;
//}

//  const Point & getP0() const;
//  const Point & getP1() const;
//};
