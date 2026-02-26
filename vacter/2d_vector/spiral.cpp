#include <iostream>
#include<vector>
using namespace std;

int main() {
 int row,col;
    cin>>row>>col;
    
    vector<vector<int>> arr(row,vector<int>(col));
    int top=0,right=col-1,bottom=row-1,left=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
        
    while(left<=right and top<=bottom){
            for(int j=left;j<=right;j++){
                cout<<arr[top][j]<<" ";
                
            }
            top++;
            for(int j=top;j<=bottom;j++){
               cout<<arr[j][right]<<" ";
               
            }
            right--;
            if(top<=bottom){
            for(int j=right;j>=left;j--){
                cout<<arr[bottom][j]<<" ";
                
            }
            bottom--;
        }
            if(left<=right){
            for(int j=bottom;j>=top;j--){
                cout<<arr[j][left]<<" ";
            }
        }
        left++;
    }
        return 0;
    }