#ifndef _MATRIX_H_
#define _MATRIX_H_

class Matrix {
    public:
        Matrix(int z, int s);
        virtual ~Matrix();
        virtual void ausgabe();
    protected:
        int m_zeilen, m_spalten;
        float* m_element;    
};


#endif /*_MATRIX_H_*/