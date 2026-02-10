#include <iostream>
using namespace std;
int main() {
    int n ,n1,n2,oddp=0,evenp=0;
    cin >> n;
        while(n>0){
            n1=n%10;
            oddp=oddp+n1;
            n=n/10;
            n2=n%10;
            evenp=evenp+n2;
            n=n/10;
        }
        cout<<oddp<<endl;
        cout<<evenp<<endl;
    return 0;
}