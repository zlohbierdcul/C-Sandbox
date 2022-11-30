#include "vector.h"

#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

class Vector2d : public Vector {
    public:
        Vector2d();
        Vector2d(int a, int b);
        void addiere(Vector2d v2d); 
};

#endif // _VECTOR2D_H_
