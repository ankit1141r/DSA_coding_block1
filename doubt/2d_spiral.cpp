#include <iostream>
using namespace std;

int main() {
    int arr[6][6]={
        {1,2,3,4,17,18},
        {5,6,7,8,19,20},
        {9,10,11,12,21,22},
        {13,14,15,16,23,24},
        {25,26,27,28,29,30},
        {31,32,33,34,35,36}
    };
        int row=sizeof(arr)/(sizeof(int)*sizeof(int));
    int col=sizeof(arr[0])/sizeof(int);
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

            // for(int j=1;j<col-1;j++){
            //     cout<<arr[1][j]<<" ";
            // }
            // for(int j=2;j<col-1;j++){
            //    cout<<arr[j][col-2]<<" ";
            // }
            // for(int j=col-3;j>=1;j--){
            //     cout<<arr[row-2][j]<<" ";
            // }
    

    return 0;
}