#include <iostream>
using namespace std;
int main() {
    int n,n1;
    cin >> n;
    cin>>n1;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]==n1){
            cout<<i+1<<endl;
        }
    }
    return 0;
}