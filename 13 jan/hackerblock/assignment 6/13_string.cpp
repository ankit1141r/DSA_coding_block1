#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	int m=s.length();
int right=m-1;
string ans="true";
for(int i=0;i<(m+1)/2;i++){
	if(s[i]!=s[right]){
		ans="false";
		break;
	}
	right--;

}
	cout<<ans;
	
	return 0;
}