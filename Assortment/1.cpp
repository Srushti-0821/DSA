// Negative Elements in 1D Array

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the array's size: ";
    cin >> n;

    int a[n];

    cout << endl << "Enter array's elements:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << endl << "Negative elements from an Array: ";
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}