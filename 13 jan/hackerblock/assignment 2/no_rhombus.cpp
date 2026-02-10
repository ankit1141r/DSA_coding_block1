#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
     for(int i=1;i<=n;i++){
        m=i;
        for(int j=1;j<=n-i;j++){
            cout<<" \t";
        }
        for(int j=1; j<=i;j++){
            cout<<m<<"\t";
            m++;
        }
        m--;
        for(int j=1; j<=i-1;j++){
            m--;
            cout<<m<<"\t";
            
        }
        cout<<endl;
     }
      for(int i=n-1;i>=1;i--){
        m=i;
        for(int j=1;j<=n-i;j++){
            cout<<" \t";
        }
        for(int j=1; j<=i;j++){
            cout<<m<<"\t";
            m++;
        }
        m--;
        for(int j=1; j<=i-1;j++){
            m--;
            cout<<m<<"\t";
            
        }
        cout<<endl;
     }
    return 0;
}