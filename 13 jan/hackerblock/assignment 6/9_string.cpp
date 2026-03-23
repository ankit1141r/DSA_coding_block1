#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(string X,string Y) {
    return (X+Y)>(Y+X);
}
int main() {
    int t;
    cin >> t;
    for(int j=0;j<t;j++) {
        int n;
        cin>>n;
        vector<string>arr(n);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),compare);
			for(int i=0;i<n;i++){
			cout<<arr[i];
			}
            cout<<"\n";
         }
    return 0;
}