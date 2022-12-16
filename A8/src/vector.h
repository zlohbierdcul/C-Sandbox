#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "Matrix.h"

class Vector :
  public Matrix
{
public:
  Vector(int m);
  virtual ~Vector();
  float betrag();
  float skalarprodukt(Vector v);
  float winkel(Vector v);
  int* vector;
};

#endif