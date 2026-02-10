#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n*2-1;i++){
        if(i<=n){
        for(int j=1;j<=i;j++){
            if(j%2==1){
            cout<<i<<"\t";}
            else{
                cout<<n*2-i<<"\t";
            }
        }
        for(int k=1;k<=(n*2)-(i*2);k++){
            cout<<" \t";
        }
        for(int j=1;j<=i;j++){
            if(j%2==1){
            cout<<n*2-i<<"\t";
            }
            else{
                cout<<i<<"\t";
            }
        }
    }
    else{
        for(int j=1;j<=n*2-i;j++){
            if(j%2==1){
            cout<<i<<"\t";}
            else{
                cout<<n*2-i<<"\t";
            }
        }
        for(int k=1;k<=(i*2)-(n*2);k++){
            cout<<" \t";
        }
        for(int j=1;j<=n*2-i;j++){
            if(j%2==1){
           cout<<n*2-i<<"\t";
            }
            else{
                 cout<<i<<"\t";
            }
        }
    }


       
        cout<<endl;
      }
    return 0;
}