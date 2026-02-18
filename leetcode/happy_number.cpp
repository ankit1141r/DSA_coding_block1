#include<iostream>
using namespace std;
bool ishappy(int n){
if(n==1 || n==7){
        return true; 
    }
    else if(n<10){
        return false;
    }
    else{
        int sum=0;
     while(n!=0){
       int r=n%10;
       sum=sum+(r*r);
       n/=10;
     }
}
}
int main() {
    int n;
    cin>>n;
 bool number=ishappy(n);
 if(number==true){
    cout<<"happy";
 }
 else{
    cout<<"unhappy";
 }

    return 0;
}
