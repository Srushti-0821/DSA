#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int lastDigit = num % 10;
    int firstDigit = num;

    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    int sum = firstDigit + lastDigit;

    cout << "The sum of the first and the last digit: " << sum;

    return 0;
}


// output :-

// Enter any number: 2
// The sum of the first and the last digit: 4