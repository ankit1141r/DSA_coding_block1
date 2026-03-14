#include<iostream>
using namespace std;
int main() {
    int m,n,count=0;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(target==arr[i][j]){
                count++;
                break;
            }
        }
    }
    if(count==0){
        cout<<0;
    }
    else cout<<1;
 
    return 0;
}