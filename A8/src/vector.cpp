#include "vector.h"
#include <math.h>
#include <limits>

using namespace std;

Vector::Vector(int dimension)
  : Matrix(dimension, 1)
{
  vector = (int *) malloc (sizeof(int) * dimension);
}

Vector::~Vector() {
  
}

float Vector::betrag()
{
  return sqrt(skalarprodukt(*this));
}

float Vector::skalarprodukt(Vector v)
{
  if((m_spalten!=v.m_spalten) || (m_zeilen!=v.m_zeilen) || (m_spalten!=1))
    return std::numeric_limits<float>::quiet_NaN();

  float s=0;
  for(int i=0; i<m_zeilen*m_spalten; i++)
  {
    s+=m_element[i]*v.m_element[i];;
  }
  return s;
}

float Vector::winkel(Vector v)
{
  float w = skalarprodukt(v);
  if (w==w)
  {
    w = (float)(acos(w/betrag()/v.betrag())*180/3.14159);
  }
  return w;
}
