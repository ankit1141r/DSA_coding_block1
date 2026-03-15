#include<iostream>
using namespace std;
int main() {
    int n,m,stre,power;
    cin>>n>>m>>stre>>power;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(power>stre){
                if(j==m-1){
                    power++;
                }
            if(arr[i][j]=='.'){
                power-=3;
            }
            else if(arr[i][j]=='*'){
                power+=4;
            }
            else if(arr[i][j]=='#'){
                break;
            }
        }
    }
    
    }
    if(power>stre){
        cout<<"Yes"<<endl;
        cout<<power;
 }
 else cout<<"No";
    
    

    return 0;
}