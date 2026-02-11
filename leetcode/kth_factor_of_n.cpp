#include <iostream>
using namespace std;
int main() {
    int n,factor,count=0;
    cin>>n>>factor;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
            if(count==factor){
                cout<<i<<endl;
                break;
            }
        }
    }
    if(count<factor){
        cout<<-1;
    }
    return 0;
}