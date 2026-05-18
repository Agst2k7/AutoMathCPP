#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>

class Matrix{
    public:
        Matrix(const int& rows, const int& columns);
        Matrix(const int& order);
        
        int Determinant();

        int rowsQnt() const;
        int columnsQnt() const;
        double getValue(int& row, int& column) const;

        void setValue(double& value, int& row, int& column);
        void userSetValues();
        void setValues(const std::vector<double>& values);

        void show();

    private:
        int rows, columns;
        bool isSquare = false;

        std::vector<std::vector<double>> matrix;

};

#endif