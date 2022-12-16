#include <iostream>
#include "vector2d.h"
#include "vector.h"
#include "matrix.h"

using namespace std;

// Vector2d::Vector2d() {
//     m_element[0] = 0;
//     m_element[1] = 0;
// }

Vector2d::Vector2d(int a, int b)
    : Vector(2)
{
    m_element[0] = a;
    m_element[1] = b;
}

void Vector2d::addiere(Vector2d v2d) {
    m_element[0] += v2d.m_element[0];
    m_element[1] += v2d.m_element[1];
}

void Vector2d::ausgabe() {
    cout << "Vector2d: ";
    Matrix::ausgabe();
    cout << endl;
}

void Vector2d::kopiereIn(Vector2d *zielvar) {
    zielvar->m_element[0] = this->m_element[0];
    zielvar->m_element[1] = this->m_element[1];
}

void tausche(Vector2d *a, Vector2d *b) {
    Vector2d temp = *a;
    b->kopiereIn(a);
    temp.kopiereIn(b);
}