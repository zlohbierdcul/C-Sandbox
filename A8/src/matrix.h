#ifndef _MATRIX_H_
#define _MATRIX_H_

class Matrix {
    public:
        //Matrix();
        Matrix(int z, int s);
        virtual ~Matrix();
        virtual void ausgabe();
        static int getCounter();
    protected:
        int m_zeilen, m_spalten;
        float* m_element;    
    private:
        static int counter;
};


#endif /*_MATRIX_H_*/