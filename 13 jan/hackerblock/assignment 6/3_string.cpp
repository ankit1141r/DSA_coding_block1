#include <iostream>
#include <string>
using namespace std;
int main()
{
   string s;
   int i=0;
   getline(cin,s);
   while(i<s.length()){
      char a=s[i];
      int count=0;
       while(s[i]==a){
           count++;
           i++;
       }
       cout<<a<<count;
       
   }

    return 0;
}
