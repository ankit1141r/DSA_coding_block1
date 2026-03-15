#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int>> arr(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
	for(int i=0;i<m;i++){
		sort(arr[i].begin(),arr[i].end());
	}
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";	
        }
        cout<<endl;
    }
    return 0;
}