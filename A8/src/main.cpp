#include <iostream>
#include "matrix.h"
#include "vector.h"
#include "vector2d.h"

using namespace std;

int main() {
    Vector2d array[3];
    // Der Matrix Konstruktor, der Vector Konstruktor und der Vector2d Standartkonstruktor
    // alle jeweils 3 mal



    Vector2d* varr[2];

    for (int i = 1; i <= 2; i++) {
        varr[i-1] = new Vector2d((float)i,(float)i+1);
        varr[i-1]->ausgabe();
    }

    varr[0]->addiere(*varr[1]);
    varr[0]->ausgabe();
}