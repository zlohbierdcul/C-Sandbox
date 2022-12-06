#include <iostream>
#include "matrix.h"
#include "vector.h"
#include "vector2d.h"

using namespace std;

int main() {
    // Fragen 1.
    // Erwartet 4
    // Tatsächlich 6
    // Erfolgen bei Zerstörung auf dem Heap und bei Methodenaufrufen mit Objektinstanzen als parameter.
    
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
    cout << "w : ";
    w.ausgabe();
    cout << endl;

    Vector2d u = Vector2d(1,2);
    u.kopiereIn(&w);
    cout << "w : ";
    w.ausgabe();
    cout << endl;

    u.kopiereIn(&a);
    cout << "a : ";
    a.ausgabe();
    cout << endl;

    tausche(&z, &a);
    cout << "z : ";
    z.ausgabe();
    cout << endl;
    cout << "a : ";
    a.ausgabe();
    cout << endl;
}