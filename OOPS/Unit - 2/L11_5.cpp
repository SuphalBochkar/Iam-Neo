#include <iostream>
using namespace std;

class MatrixOperations
{
public:
    int arr[100][100];
    int n, m;

    void inputMatrix()
    { 
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void transpose()
    {
        cout << "The Transpose matrix is:" << endl;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }

    bool checkIfSymmetric()
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] != arr[j][i])
                {
                    return false;
                }
            }
        }
        return true;
    }

    void printSymmetryResult()
    {
        bool symmetric = checkIfSymmetric();
        if (symmetric)
        {
            cout << "Matrix is Symmetric" << endl;
        }
        else
        {
            cout << "Matrix is not Symmetric" << endl;
        }
    }
};

int main()
{
    MatrixOperations matrix;

    matrix.inputMatrix();
    matrix.transpose();
    matrix.printSymmetryResult();

    return 0;
}
