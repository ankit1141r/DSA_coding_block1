#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n,sumcol=0,col;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
        for(int j=0;j<n;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=arr[i][j];
            }
            if(sum>sumcol){
                sumcol=sum;
                col=j+1;
            }
        }
        cout<<col<<" "<<sumcol;
	return 0;
}