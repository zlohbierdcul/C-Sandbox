#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix() 
    : m_zeilen(1), m_spalten(2)
{
    for (int zeile = 0; zeile < m_zeilen; zeile++) {
        for (int spalte = 0; spalte < m_spalten; spalte++) {
            m_element[zeile][spalte] = 0;
        }
    }
}

Matrix::Matrix(int z, int s) 
    : m_zeilen(z), m_spalten(s)
{
}

Matrix::~Matrix() {
    // std::cout << "Ich bin ein dekonstruktor" << std::endl;
}


void Matrix::ausgabe() {
    for (int zeile = 0; zeile < m_zeilen; zeile++) {
        for (int spalte = 0; spalte < m_spalten; spalte++) {
            std::cout << m_element[zeile][spalte] << std::endl;
        }
    }
}