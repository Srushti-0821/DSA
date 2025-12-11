// Sum of Elements in Row & Column of 2D Array

#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the array's row size: ";
    cin >> row;

    cout << "Enter the array's column size: ";
    cin >> col;

    int a[row][col];

    cout << endl << "Enter array's elements:" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    int r;
    cout << endl << "Enter row number: ";
    cin >> r;

    cout << "Elements of row " << r << ": ";
    int rowSum = 0;
    for(int j = 0; j < col; j++) {
        cout << a[r][j] << ", ";
        rowSum += a[r][j];
    }
    cout << endl << "The sum of a row " << r << ": " << rowSum << endl;

    int c;
    cout << endl << "Enter column number: ";
    cin >> c;

    cout << "Elements of column " << c << ": ";
    int colSum = 0;
    for(int i = 0; i < row; i++) {
        cout << a[i][c] << ", ";
        colSum += a[i][c];
    }
    cout << endl << "The sum of column " << c << ": " << colSum << endl;

    return 0;
}