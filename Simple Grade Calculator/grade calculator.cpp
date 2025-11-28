#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter your score: ";
    cin >> score;

    // ----------------------------
    // Step 1: Grade using Ternary
    // ----------------------------
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
                             'F';

    cout << "Your grade is " << grade;

    // ----------------------------
    // Step 2: Additional Comment using Switch
    // ----------------------------
    switch(grade) {
        case 'A': 
            cout << ". Excellent work!";
            break;
        case 'B': 
            cout << ". Well done!";
            break;
        case 'C': 
            cout << ". Good job!";
            break;
        case 'D': 
            cout << ". You passed, but you could do better.";
            break;
        case 'F': 
            cout << ". Sorry, you failed.";
            break;
    }

    // ----------------------------
    // Step 3: Eligibility Check
    // ----------------------------
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        cout << " You are eligible for the next level.";
    } else {
        cout << " Please try again next time.";
    }

    cout << endl;
    return 0;
}




// output :-

// Enter your score: 98

// Your grade is A. Excellent work! You are eligible for the next level.