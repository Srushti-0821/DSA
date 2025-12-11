//  Largest Element in 2D Array

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

    int largest = a[0][0];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }

    cout << endl << "The largest element is: " << largest;

    return 0;
}