#include <iostream>
using namespace std;
int main()
{
    char str[] = "programming";
    int freq[26] = {0};
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
    return 0;
}