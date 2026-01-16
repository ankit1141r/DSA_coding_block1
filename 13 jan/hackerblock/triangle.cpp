#include<iostream>
using namespace std;
int main(){
 int a,b,c;
 cin>>a>>b>>c;
 if(a==b && b==c){
     cout<<"Equilateral";}
    else if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b)){
        cout<<"Isosceles";}
        else{
            cout<<"Scalene";
        }

    return 0;
}