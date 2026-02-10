#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    for(int i=1;i<=n;i++){
        
        for(int j=m;j>1;j--){
            cout<<j<<" ";
        }
        m--;
        cout<<"* ";

        for(int j=i-1;j>=1;j--){
            
             cout<<j<<" ";
            
        
        }
       
        cout<<endl;
      }
    return 0;
}