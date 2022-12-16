#include <iostream>
#include "matrix.h"

using namespace std;

int Matrix::counter = 0;

Matrix::Matrix(int z, int s) 
    : m_zeilen(z), m_spalten(s)
{
    m_element = (float *) malloc ((z * s) * sizeof(float));
    Matrix::counter++;
}

Matrix::~Matrix() {
    Matrix::counter--;
}


void Matrix::ausgabe() {
    cout << "( ";
    for (int zeile = 0; zeile <= m_zeilen; zeile++) {
        cout << m_element[zeile] << " ";    
    }
    cout << ")";
}

int Matrix::getCounter() {
    return counter;
}