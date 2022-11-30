#ifndef _MATRIX_H_
#define _MATRIX_H_

class Matrix {
    public:
        Matrix();
        Matrix(int z, int s);
        ~Matrix();
        void ausgabe();
    protected:
        int m_zeilen, m_spalten;
        float m_element[2];
    

};

#endif /*_MATRIX_H_*/