#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
        int c = s[i];
        if (islower(c)) 
            s[i] = toupper(c);
        else if (isupper(c)) 
            s[i] = tolower(c);        
    }
	cout<<s;
return 0;
}