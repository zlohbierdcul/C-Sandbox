#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

#include "vector.h"

class Vector2d : public Vector {
    public:
        Vector2d();
        Vector2d(int a, int b);
        void ausgabe();
        void addiere(Vector2d v2d); 
        void kopiereIn(Vector2d *zielvar);
};

void tausche(Vector2d *a, Vector2d *b);

#endif // _VECTOR2D_H_
