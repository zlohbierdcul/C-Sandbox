#include <iostream>
#include "matrix.h"
#include "vector.h"
#include "vector2d.h"

using namespace std;

int main() {
    std::cout << "Hallo Welt!" << std::endl;
    Matrix matrix = Matrix();
    matrix.ausgabe();
    Vector vector = Vector();
    cout << "Betrag Vector: " << vector.betrag() << endl;
    Vector2d v2d1 = Vector2d(4,4);
    Vector2d v2d2 = Vector2d(5,5);
    v2d1.addiere(v2d2);
    v2d1.ausgabe();
    
    cout << endl;
    cout << endl;

    Vector2d a = Vector2d(3,1);
    Vector2d b = Vector2d(1,2);
    Vector2d c = Vector2d();

    c.addiere(a);
    c.ausgabe();
    b.addiere(c);
    b.ausgabe();
    cout << b.betrag() << endl;

}