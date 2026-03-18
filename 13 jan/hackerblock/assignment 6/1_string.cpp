#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	cout<<s[0];
	for(int i=1;i<s.length();i++){
		if(isupper(s[i])){
			cout<<endl;
		}
		cout<<s[i];
	}
	return 0;
}