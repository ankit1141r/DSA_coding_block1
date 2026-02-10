#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            if(j%2==1){
            cout<<i<<"\t";}
            else{
                cout<<n*2-i<<"\t";
            }
        }
        for(int k=1;k<=n-i;k++){
            cout<<" \t";
        }
        for(int k=1;k<=n-i;k++){
            cout<<" \t";
        }
        for(int j=1;j<=i;j++){
            if(j%2==1){
            cout<<n*2-i<<"\t";}
            else{
                cout<<i<<"\t";
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        
        for(int j=1;j<=i;j++){
            if(j%2==1){
            cout<<n*2-i<<"\t";}
            else{
                cout<<i<<"\t";
            }
        }
        for(int k=1;k<=n-i;k++){
            cout<<" \t";
        }
        for(int k=1;k<=n-i;k++){
            cout<<" \t";
        }
        for(int j=1;j<=i;j++){
            if(j%2==1){
            cout<<i<<"\t";}
            else{
                cout<<n*2-i<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}