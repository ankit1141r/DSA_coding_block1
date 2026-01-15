#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "n:";
   cin >> number;
    for (int i=1; i<=number; i++) {
        for(int j=1; j<=i-1; j++) {
            cout << "  ";
        }
        for(int j=1; j<=number-i+1; j++) {
            cout << "* ";
        }
        
       cout << endl;
    }
    return 0;
}