#include <iostream>
#include<vector>
using namespace std;

int main() {
 int row,col;
    cin>>row>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
        int i=0;
    while(i<=(row/2)-1){
            for(int j=i;j<col-i;j++){
                cout<<arr[i][j]<<" ";
            }
            for(int j=i+1;j<col-i;j++){
               cout<<arr[j][col-i-1]<<" ";
            }
            for(int j=col-i-2;j>=i;j--){
                cout<<arr[row-i-1][j]<<" ";
            }
            for(int j=row-i-2;j>=i+1;j--){
                cout<<arr[j][i]<<" ";
            }
            i++;
        }
 return 0;
}