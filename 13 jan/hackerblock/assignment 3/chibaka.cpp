
#include <iostream>
using namespace std;
int main() {
    long long n;
    long long n1,n2,new_no=1,real_no=0,count=0,l=0;
    cin >> n;
    long long temp=n;
        while(temp!=0){
           temp/=10;
           l++;
        }
        while(n!=0){
            n1=n%10;
            n=n/10;
            if(count==l-1){
            if(n1>4 && n1!=9){
                n1=9-n1;
            }}
            else{
                if(n1>4 ){
                n1=9-n1;
            }
            }
            
           new_no=new_no*10+n1;
           
           count++;
        }
        while(new_no>0){
            n2=new_no % 10;
            new_no=new_no/10;
           real_no=real_no*10+n2;
        }
        cout<<real_no/10<<endl;
     
    return 0;
}