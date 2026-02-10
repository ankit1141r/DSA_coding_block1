#include <iostream>
using namespace std;
int main() {
    int n ,n1,n2f,count=0;
    cin >> n;
    cin>>n2f;
        while(n>0){
            n1=n%10;
            if(n1==n2f){
                count++;
            }
            n=n/10;
           
        }
        cout<<count<<endl;
     
    return 0;
}