#include <iostream>
#include "vector2d.h"
#include "vector.h"
#include "matrix.h"

using namespace std;

Vector2d::Vector2d() {
    m_element[0] = 0;
    m_element[1] = 0;
}

Vector2d::Vector2d(int a, int b) {
    m_element[0] = a;
    m_element[1] = b;
}

void Vector2d::addiere(Vector2d v2d) {
    m_element[0] += v2d.m_element[0];
    m_element[1] += v2d.m_element[1];
}