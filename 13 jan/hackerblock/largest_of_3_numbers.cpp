#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int largest = a; // assume a is largest
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    cout << largest;
    return 0;
}
