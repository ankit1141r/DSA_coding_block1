#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
  
   for(int i=1;i<=n;i++)
   {
    cout<<"* ";
   }
   cout<<endl;
    for(int i=1;i<=n-2;i++){
      for(int j=1;j<=n;j++){
        if(j==1 ||j==n || j==n-i || j==i+1){
            cout<<"* ";
        }
   
        else{
            cout<<"  ";
        }
      }
      cout<<endl;
    }
      
   for(int i=1;i<=n;i++)
   {
    cout<<"* ";
   }

return 0;
}