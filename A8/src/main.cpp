#include <iostream>
#include "matrix.h"
#include "vector.h"
#include "vector2d.h"
#include <array>

using namespace std;

int main() {
    Vector2d* array[3];

    Vector2d* varr[2];

    for (int i = 1; i <= 2; i++) {
        varr[i-1] = new Vector2d(i,i+1);
        varr[i-1]->ausgabe();
    }

    varr[0]->addiere(*varr[1]);
    varr[0]->ausgabe();

    delete varr[0];
    delete varr[1];

}