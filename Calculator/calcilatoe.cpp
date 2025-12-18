#include <iostream>
using namespace std;

// User Defined Functions
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divi(float a, float b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int main() {
    int choice;
    int num1, num2;

    while (true) {

        cout << "\nPress 1 for +\n";
        cout << "Press 2 for -\n";
        cout << "Press 3 for *\n";
        cout << "Press 4 for /\n";
        cout << "Press 5 for %\n";
        cout << "Press 0 for exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program...";
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {

            case 1:
                cout << "Addition of " << num1 << " and " << num2 
                     << " is " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Subtraction of " << num1 << " and " << num2 
                     << " is " << sub(num1, num2) << endl;
                break;

            case 3:
                cout << "Multiplication of " << num1 << " and " << num2 
                     << " is " << mul(num1, num2) << endl;
                break;

            case 4:
                if (num2 == 0)
                    cout << "Cannot divide by zero!" << endl;
                else
                    cout << "Division of " << num1 << " and " << num2 
                         << " is " << divi(num1, num2) << endl;
                break;

            case 5:
                if (num2 == 0)
                    cout << "Cannot mod by zero!" << endl;
                else
                    cout << "Modulus of " << num1 << " and " << num2 
                         << " is " << mod(num1, num2) << endl;
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
