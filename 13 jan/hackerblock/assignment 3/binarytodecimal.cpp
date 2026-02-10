#include <iostream>
using namespace std;
int main() {
    int n,n1,binary=0,new_no=1;
    cin >>n;
     while(n>0){
            n1=n%10;
            n=n/10;
           new_no=new_no*10+n1;
        }
        while(new_no>0){
            n1=new_no%10;
            new_no=new_no/10;
           binary=binary*2+n1;
        }
        cout<<binary/2<<endl;
     return 0;
}