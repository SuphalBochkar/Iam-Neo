#include <iostream>
using namespace std;

int main()
{
    MatrixOperations matrix;

    matrix.inputMatrix();
    matrix.transpose();
    matrix.printSymmetryResult();

    return 0;
}
