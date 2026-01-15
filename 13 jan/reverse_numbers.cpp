#include<iostream>
using namespace std;
int main() {
    int number,rem=0;
    int new_number=0;
   
   cin >> number;
    for (int i =1; i<=number; i++) {
        rem = number % 10;
        new_number = new_number * 10 + rem;
        number = number / 10;
       
    }
    cout << new_number;
    return 0;
}