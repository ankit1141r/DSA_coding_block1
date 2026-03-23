#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	int max1=0,count=0;
	for(int i=0;i<s.length();i++){
		while(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			count++;
			i++;
			}
		if(count>=max1){
			max1=count;
		}
		count=0;

	}
	cout<<max1;
	return 0;
}