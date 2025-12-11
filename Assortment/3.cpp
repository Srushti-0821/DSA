//  Transpose of 2D Array

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the array's row & column size: ";
    cin >> n;

    int a[n][n];

    cout << endl << "Enter array's elements:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    cout << endl << "The transpose matrix of an array:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}