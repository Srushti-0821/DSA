#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            if(i == 1 || i == 3) {  
            
                cout << "* ";
            }
            else if(i == 2) {       
                
                if(j == 1 || j == n)
                    cout << "* ";
                else
                    cout << "  ";
            }
            else {                 
                
                if(j == 1)
                    cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}
