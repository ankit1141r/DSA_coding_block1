#include<iostream>
#include<string>
using namespace std;
void single(string s){
	int count1=0;
	for(int i=0;i<s.length();i++){

		int count=0;
		for(int j=0;j<s.length();j++){
			if(s[i]==s[j] && i!=j){
				count++;
			}
		}
		if(count==0){
			cout<<s[i]<<endl;
			count1++;
			break;
		}

		}
		if(count1==0){
		cout<<-1<<endl;
		}
	
}
int main() {
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		single(s);
	}
	return 0;
}