#include<iostream>
using namespace std;
int main() {
    int n;
    bool ans=true;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][j]!=0){
                ans =false;
                break;
            }
        }
    }
        if(ans==true){
            cout<<"true";
        }
        else cout<<"false";
    return 0;
}