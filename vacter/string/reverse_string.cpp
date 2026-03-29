#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello";
    int left = 0;
    int right = str.length() - 1;
    while(left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    cout << "Reversed string: " << str;
    return 0;
}