#include <iostream>
using namespace std;
int main() {
  int principal, rate, time;
    float simple_interest;
    cout << "Enter principal amount: ";
    cin >> principal;   
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period: ";
    cin >> time;
    simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest is: " << simple_interest << endl;
    return 0;
}