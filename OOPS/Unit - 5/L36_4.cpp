#include <bits/stdc++.h>
using namespace std;

void readMatrix(double *matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i * cols + j];
        }
    }
}

void readMatrix(int *matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i * cols + j];
        }
    }
}

int isIdentity(double *matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j && matrix[i * cols + j] != 1.0)
            {
                return 0;
            }
            if (i != j && matrix[i * cols + j] != 0.0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;
    double *matrix = new double[rows * cols];
    readMatrix(matrix, rows, cols);
    int isIden = isIdentity(matrix, rows, cols);
    if (isIden)
    {
        cout << "Identity matrix";
    }
    else
    {
        cout << "Not an identity matrix";
    }
    delete[] matrix;
    return 0;
}