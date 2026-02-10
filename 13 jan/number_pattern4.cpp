#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        int sum=i;
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j<=2*i-1;j++){
            
             cout<<j<<" ";
            
          sum++;
        }
        for(int j=2*(i-1);j>=i;j--){
         
          cout<<j<<" ";
        }
        cout<<endl;
      }
    return 0;
}