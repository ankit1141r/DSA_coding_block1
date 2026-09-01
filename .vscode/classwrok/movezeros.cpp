#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int writeIndex = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
            arr[writeIndex] = arr[i];
            writeIndex++;
        }
    }
    while(writeIndex < n) {
        arr[writeIndex] = 0;
        writeIndex++;
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}