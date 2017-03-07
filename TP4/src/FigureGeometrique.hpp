#ifndef FIGUREGEOMETRIQUE_HPP_
#define FIGUREGEOMETRIQUE_HPP_

#include "Couleur.hpp"

class FigureGeometrique{
private:
  Couleur _couleur;
public:
  const Couleur & getCouleur() const;
};

#endif
