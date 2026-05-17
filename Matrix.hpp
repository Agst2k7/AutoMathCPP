#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>

class Matrix{
    public:
        Matrix(int rows, int columns);
        Matrix(int order);
        
        int Determinant();
        int rowsQnt();
        int columnsQnt();
        void setValues();
        void show();

    private:
        int rows, columns;
        bool isSquare = false;

        std::vector<std::vector<double>> matrix;

};

#endif