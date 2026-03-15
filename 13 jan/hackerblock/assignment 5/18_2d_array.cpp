#include<iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    bool brr[m];
    bool crr[n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
              brr[i] =true;
               crr[j]=true;
            }
        }
        }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(brr[i]==true || crr[j]==true){
               arr[i][j]==1;
            }
        }
        }  

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}