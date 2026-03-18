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
                for(int k=0;k<m;k++){
              if(arr[k][j]==0){
               arr[k][j]=-1;
            }
            }
            for(int k=0;k<n;k++){
              if(arr[i][k]==0){
               arr[i][k]=-1;
            }
            }

        }
        }
    }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==-1){
               arr[i][j]=1;
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