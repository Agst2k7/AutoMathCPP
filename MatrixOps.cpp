#include "MatrixOps.hpp"
#include <iostream>

using namespace std;

Matrix sum(const Matrix& m1, const Matrix& m2) {
    int m1_c, m1_r, m2_c, m2_r;
    double v;
    m1_c = m1.columnsQnt();
    m1_r = m1.rowsQnt();
    m2_c = m2.columnsQnt();
    m2_r = m2.rowsQnt();

    Matrix res(m1_c, m1_r);

    if (m1_c != m2_c || m1_r != m2_r) {
        cout << "Erro" << endl;
    }  else {

        for (int r=0; r<m1_r; r++) {
            for (int c=0; c<m1_c; c++) {
                v = m1.getValue(r, c) + m2.getValue(r, c);
                res.setValue(v, r, c);
            }
        }
    }

    return res;
}