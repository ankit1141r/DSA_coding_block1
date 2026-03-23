#include <iostream>
#include<vector>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
   string s;
   int j=0,num=0,ans=0;
   int b;
   getline(cin,s);
   int l=s.length();
   vector<char>arr(l);
   for(int i=0;i<l;i++){
	    arr[i]=s[i];
   }
  

   sort(arr.begin(),arr.end());
   while(j<s.length()){
      int a=arr[j];
      int count=0;
       while(arr[j]==a){
           count++;
           j++;
       }
	   if(count>num){
		   num=count;
		   ans=a;
	   }
      }
	  char ch=ans;
    cout<<ch;

    return 0;
}