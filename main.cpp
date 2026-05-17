#include <iostream>
#include "Matrix.hpp"

using namespace std;

int main() {

    int x, y;

    cout << "Insert the number of rows:" << endl;
    cin >> x;
    cout << "Insert the number of columns:" << endl;
    cin >> y;

    Matrix m(x, y);
    m.setValues();
    m.show();

    m.Determinant();

    return 0;
}