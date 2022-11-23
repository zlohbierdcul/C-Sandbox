#include <iostream>
#include <math.h>
#include "vector.h"
#include "matrix.h"

using namespace std;


double Vector::betrag() {
    return sqrt(pow(m_element[0][0], 2) + pow(m_element[1][0], 2));
}