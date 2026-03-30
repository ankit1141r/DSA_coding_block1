#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s){
	int m=s.length();
int right=m-1;
for(int i=0;i<(m+1)/2;i++){
	if(s[i]!=s[right]){
		return false;
		break;
	}
	right--;
}
return true;
}
int main(){
   string s;
   cin>>s;
   string ans;
	int size=1,count=0;
	for(int j=0;j<s.length();j++){
	for(int i=0;i<s.length()-j;i++){
		string str=	s.substr(i,size);
		if (ispalindrome(str)){
			int length=str.length();
            if(length>count){
                count=length;
                ans=str;
            }
		}
	}
	size++;
	}
    cout<<ans;
 
    }
