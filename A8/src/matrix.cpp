#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix(int z, int s) 
    : m_zeilen(z), m_spalten(s)
{
    // cout << "Matrix Konstruktor z*s" << endl;
    m_element = new float[s*z];
}

Matrix::~Matrix() {
    delete[] m_element;
}


void Matrix::ausgabe() {
    cout << "( ";
    for (int zeile = 0; zeile < m_zeilen; zeile++) {
        cout << m_element[zeile] << " ";    
    }
    cout << ")";
}