#include<iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                for(int k=0;k<n;k++){
              arr[i][k] =1;
            }
            for(int k=0;k<m;k++){
              arr[k][j] =1;
            }

        }
        }
    }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
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