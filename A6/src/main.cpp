#include <iostream>
#include "matrix.h"
#include "vector.h"
#include "vector2d.h"

using namespace std;

int main() {
    // Fragen 1.
    // Erwartet 3
    // Tatsächlich 6
    // Erfolgen bei Zerstörung auf dem Heap und bei Methodenaufrufen mit 2DVector als parameter.
    
    Matrix matrix = Matrix();
    matrix.ausgabe();
    cout << endl;

    Vector2d a = Vector2d(3,1);
    Vector2d b = Vector2d(1,2);
    Vector2d c = Vector2d();

    c.addiere(a);
    c.ausgabe();
    cout << endl;
    b.addiere(c);
    b.ausgabe();
    cout << endl;
    cout << b.betrag() << endl;
    
    cout << endl;

    Vector2d z = Vector2d(-3, 1);
    Vector2d w = Vector2d();

    a.addiere(z);
    a.ausgabe();

    cout << endl;
}