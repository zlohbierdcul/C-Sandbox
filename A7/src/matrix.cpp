#include <iostream>
#include "matrix.h"

using namespace std;

int Matrix::counter = 0;

Matrix::Matrix() 
    : m_zeilen(1), m_spalten(2)
{
    Matrix::counter++;
    cout << counter << endl;
    for (int zeile = 0; zeile <= m_zeilen; zeile++) {
        m_element[zeile] = 0;
    }
}

Matrix::Matrix(int z, int s) 
    : m_zeilen(z), m_spalten(s)
{
    Matrix::counter++;
    cout << counter << endl;
}

Matrix::~Matrix() {
    Matrix::counter--;
    cout << counter << endl;
    // cout << "Matrix ";
    // Matrix::ausgabe();
    // cout << " wird zerstört" << endl;
    std::cout << "Ich bin ein dekonstruktor" << std::endl;
}


void Matrix::ausgabe() {
    cout << "( ";
    for (int zeile = 0; zeile <= m_zeilen; zeile++) {
        cout << m_element[zeile] << " ";    
    }
    cout << ")";
}