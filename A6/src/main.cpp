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
    cout << "c : ";
    c.ausgabe();
    cout << endl;

    b.addiere(c);
    cout << "b : ";
    b.ausgabe();
    cout << endl;

    cout << b.betrag() << endl;

    Vector2d z = Vector2d(-3, 1);
    Vector2d w = Vector2d();


    a.addiere(z);
    cout << "a : ";
    a.ausgabe();
    cout << endl;

    w.addiere(z);
    cout << "w : ";
    w.ausgabe();
    cout << endl;

    w.addiere(b);
    cout << "b : ";
    w.ausgabe();
    cout << endl;


}