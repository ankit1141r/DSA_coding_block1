#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "n:";
   cin >> number;
    for (int i =1; i<=number; i++) {
            for(int j=1; j<=i; j++) {
            cout << "* ";
        }
          cout << endl;
      }
        for (int i =number-1; i>=1; i--) {
            for(int j=1; j<=i; j++) {
            cout << "* ";
        }
            cout << endl;
        }
    }