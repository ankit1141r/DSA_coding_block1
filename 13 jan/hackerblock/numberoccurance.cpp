#include <iostream>
using namespace std;
int main() {
    int n ,n1,count,n2f;
    cin >> n;
    cin>>n2f;
        while(n>0){
            n1=n%10;
            if(n1==n2f){
                count++;
            }
        }
        cout<<count<<endl;
        
    return 0;
}