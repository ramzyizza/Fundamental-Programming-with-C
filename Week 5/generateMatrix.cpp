#include <iostream>
using namespace std;
int matrix_1[2][2];
int matrix_2[2][2];
int new_matrix[2][2];
int main()
{

    cout << "Enter elements of matrix 1: \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix_1[i][j];
        }
    }
    cout << endl;

    cout << "Enter elements of matrix 2: \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> matrix_2[i][j];
        }
    }
    cout << endl;

    cout << "Matrix 1: \n";

    cout << "\t" << matrix_1[0][0] << "\t" << matrix_1[0][1] << endl;
    cout << "\t" << matrix_1[1][0] << "\t" << matrix_1[1][1] << endl;

    cout << "Matrix 2: \n";

    cout << "\t" << matrix_2[0][0] << "\t" << matrix_2[0][1] << endl;
    cout << "\t" << matrix_2[1][0] << "\t" << matrix_2[1][1] << endl;

    new_matrix[0][0] = (matrix_1[0][0] * matrix_2[0][0]) + (matrix_1[0][1] * matrix_2[1][0]);
    new_matrix[0][1] = (matrix_1[0][0] * matrix_2[0][1]) + (matrix_1[0][1] * matrix_2[1][1]);
    new_matrix[1][0] = (matrix_1[1][0] * matrix_2[0][0]) + (matrix_1[1][1] * matrix_2[1][0]);
    new_matrix[1][1] = (matrix_1[1][0] * matrix_2[0][1]) + (matrix_1[1][1] * matrix_2[1][1]);

    cout << endl;
    cout << "Output Matrix: \n";
    cout << "\t" << new_matrix[0][0] << "\t" << new_matrix[0][1] << endl;
    cout << "\t" << new_matrix[1][0] << "\t" << new_matrix[1][1] << endl;

    return 0;
}
