#include <iostream>
#include <string>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
  
  
  for(int i=0;i<s.length();i++){
	  if(i!=s.length()-1){
	  int difference=(s[i+1]-'0')-(s[i]-'0');
	  cout<<s[i]<<difference;
	  }
	  else cout<<s[i];
  }
    return 0;
}
