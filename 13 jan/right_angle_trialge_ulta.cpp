#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "n:";
   cin >> number;
    for (int i =number; i>=1; i--) {
   
        for(int j=1; j<=i; j++) {
            cout << "  ";
        }
      
    
        for(int j=1; j<=i; j++) {
           
            cout << "*  ";
            }
            cout << endl;
    
        }
         
    
    return 0;
}