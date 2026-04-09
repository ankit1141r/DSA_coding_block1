#include <iostream>
#include <numeric>   
#include <algorithm> 
#include <array>
using namespace std;
int main()
{
    int n, sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[0]== arr[i]){ 
            count++;  
        }
    }
    int ugly = 0;
    for(int i=0; i<n; i++){
        if(sum == arr[i]){ 
            ugly = 1;  
            if(i>0){
            swap(arr[i], arr[i-1]);
            ugly = 0;
            }
        }
        sum += arr[i];
    }
if(count == n){
   cout<<"NO"<<endl;
}
else{
    int a=arr[0],gino=1,count2=0;
   for(int i=1;i<n;i++){
    gino++;
   a=__gcd(a,arr[i]);
   if(gino<a){
    count2++;
   }
   }
   if(a<n){
    cout<<"YES";
   }
   else cout<<"NO";
}
    return 0;
}