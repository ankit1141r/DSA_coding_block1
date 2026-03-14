#include<iostream>
#include <cmath>
using namespace std;
void base(long long num,int power){
    int ans=1;
   if(power==0){
    cout<<1<<endl;
   }
   else if(power==1){
    cout<<num<<endl;
 }
 else{
 while(pow(ans,power)<=num){
    ans++;
 }
 cout<<ans-1<<endl;
}
}
int main() {
    int n,power;
    long long num;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num>>power;
        base(num,power);
    }

    return 0;
}