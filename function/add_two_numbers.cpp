#include<iostream>
using namespace std;
// no argument no return 
void greet(){
    cout<<"hello"<<endl;
}
// no argument, return 
int substract(){
    int a=5;
    int b=3;
    int c=a-b;
    return c;
}
//  argument no return 
void great(string name){
    cout<<"hello "<<name<<endl;
}
//  argument ,return 
  int add(int a , int b){
    int c=a+b;
    return c;
  }
int main() {

 greet();
 great("Ankit");
 //1st way

 int a=add(34,32);
 cout<<a<<endl;

 //2nd way

 cout<< add(73,54)<<endl;
 cout<<substract()<<endl;

    return 0;
}