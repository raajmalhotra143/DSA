#include <iostream>
using namespace std;

const int SIZE = 3;

// Function to input a matrix
void inputMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to multiply two matrices
void multiplyMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE];

    cout << "Enter elements of first matrix (3x3):\n";
    inputMatrix(a);

    cout << "Enter elements of second matrix (3x3):\n";
    inputMatrix(b);

    multiplyMatrices(a, b, result);

    cout << "\nFirst Matrix:\n";
    printMatrix(a);

    cout << "\nSecond Matrix:\n";
    printMatrix(b);

    cout << "\nResultant Matrix after multiplication:\n";
    printMatrix(result);
    cout<<"Programmed by ALFEZ";

    return 0;
}
