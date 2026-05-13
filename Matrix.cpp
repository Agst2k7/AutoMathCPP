#include "Matrix.hpp"

#include <iostream>

Matrix::Matrix(int rows, int columns) {
    this->rows = rows;
    this->columns = columns;

    matrix.resize(rows, std::vector<double>(columns));

    if (rows == columns) { this->isSquare = true; }
}

Matrix::Matrix(int order) {
    this->rows = order;
    this->columns = order;
    this->isSquare = true;
}

void Matrix::setValues() {
    double temp;

    for (int r=0; r<rows; r++) {
        for (int c=0; c<columns; c++) {
            std::cin >> temp;
            matrix[r][c] = (double)temp;
        }
    }
}

void Matrix::show() {
    for(int r=0; r<rows; r++) {
        for(int c=0; c<columns; c++) {
            std::cout << matrix[r][c] << " ";
        }
        std::cout << std::endl;
    }
}

int Matrix::columnsQnt(){
    return columns;
}

int Matrix::rowsQnt() {
    return rows;
}

int Matrix::Determinant() {
    if (!isSquare) {
        std::cout << "The matrix must be square" << std::endl;
        return 0;
    } else {
        int order = rows;

        if (order == 2) {
            double x=0.0, y=0.0;

            x += matrix[0][0] * matrix[1][1];
            y += matrix[0][1] * matrix[1][0];

            std::cout << "Det = " << x-y << std::endl;

            return x-y;
        } else if (order == 3) {
            double r = ( matrix[0][2]*matrix[1][0]*matrix[2][1] + matrix[0][1]*matrix[1][2]*matrix[2][0] + matrix[0][0]*matrix[1][1]*matrix[2][2] )
             - ( matrix[0][1]*matrix[1][0]*matrix[2][2] + matrix[0][0]*matrix[1][2]*matrix[2][1] + matrix[0][2]*matrix[1][1]*matrix[2][0] );

             std::cout << "Det = " << r << std::endl;

             return r;
        } else if (order)

        else { return 0; }
    }
}
