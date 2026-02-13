
#include <iostream>
using namespace std;
int main() {
    long long n;
    long long n1,n2,new_no=0,real_no=0;
    cin >> n;
    
        while(n!=0){
            n1=n%10;
            n=n/10;
            if(n1>4){
                n1=9-n1;
            }
           new_no=new_no*10+n1;
        }
        while(new_no>0){
            n2=new_no % 10;
            new_no=new_no/10;
           real_no=real_no*10+n2;
        }
        cout<<real_no<<endl;
     
    return 0;
}