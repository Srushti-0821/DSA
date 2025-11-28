#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter any number: ";
    cin >> num;

    int temp = num;

    while (temp != 0) {
        temp = temp / 10;
        count++;
    }

    cout << "Total number of digits: " << count;

    return 0;
}


// output :-

// Enter any number: 7451+
// Total number of digits: 4