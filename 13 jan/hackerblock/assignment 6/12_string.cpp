#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		int ch=s[i];
		int ascii=ch;
		if(i%2==0){
			ascii++;
			char ch=ascii;
			cout<<ch;
		}
		else {
			ascii--;
			char ch=ascii;
			cout<<ch;
		}
	}
	
	return 0;
}