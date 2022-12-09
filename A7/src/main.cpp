#include <iostream>
#include "matrix.h"
#include "vector.h"
#include "vector2d.h"

using namespace std;

int main() {
    // ------------------------

    Vector2d v(1,2), w(3,4);
    Matrix M;
    Matrix* Mpointer;
    M=v;
    Mpointer = &v;
    std::cout << "Ausgabe von M und über Mpointer" << std::endl;
    M.ausgabe();
    Mpointer->ausgabe();
    // M.ausgabe(): Aufruf von Matrix::ausgabe(), weil M eine Matrix ist 
    // Mpointer.ausgabe(): Aufruf von Matrix::ausgabe(), weil Mpointer ein pointer der Matrixklasse ist und die Referenz auf v gespeichert hat.
    // virtual:
    //      Die Entscheidung welche Methode aufgerunfen wird, wird nicht mehr vom Compiler festgelegt, sondern erst in der Runtime.
    //      Daher wird bei der ersten Ausgabe die Matrix ausgabe() aufgerufen, da "M" eine reine Matrixinstanz ist und der Mpointer eine Referenz auf eine Vector2dinstanz ist.

    v.addiere(w);
    std::cout << "Ausgabe von v nach Addieren" << std::endl;
    v.ausgabe();
    // (4,6) wird ausgegeben, da von dem 2D-Vektor "v" ausgabe() aufgerufen
    std::cout << "Ausgabe von M/Mpointer nach Add." << std::endl;
    M.ausgabe();
    Mpointer->ausgabe();
    // M.ausgabe(): (1,2), da die Matrix "M" mit "v" initialisiert wurde (also eine "Kopie" angelegt wurde).
    // Mpointer.ausgabe(): (4,6), da der "Mpointer" nur die Referenz auf "v" gespeichert hat und "v" hat sich verändert.
    // virtual:
    //      s.o.
    //      virtual muss in der "super" Klasse hingeschrieben werden.
    // --------------------------------------------------------------------

    cout << "";
}