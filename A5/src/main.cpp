#include <iostream>
#include "matrix.h"
#include "vector.h"
#include "vector2d.h"

using namespace std;

int main() {

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
}