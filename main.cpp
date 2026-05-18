#include <iostream>
#include <vector>

#include "Matrix.hpp"
#include "MatrixOps.hpp"

using namespace std;

int main() {

    Matrix m1(2, 2);
    Matrix m2(2, 2);

    vector<double> v= {2,2,2,2};

    m1.setValues(v);
    m2.setValues(v);

    Matrix result = sum(m1, m2);

    result.show();
    cout << "Det(result) = " << result.Determinant() << endl;

    return 0;
}