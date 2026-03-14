#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    int leftmultiply=1,rightmultiply=1;
    for(int j=0;j<=i;j++){
        leftmultiply*=arr[j];
    }
    for(int j=i+1;j<n;j++){
        rightmultiply*=arr[j];
    }
    if(leftmultiply==rightmultiply){
        count++;
    }
}
if(count==0){
    cout<<-1;
}
else if(count==n){
    cout<<1;
}
else{
    cout<<count;
}
return 0;
}