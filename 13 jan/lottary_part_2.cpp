#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 if(n>=300 && n<=460){
    cout<<"you won a Mackbook"<<endl;
    if(n>=300 && n<=460){
        cout<<"Model:M1 Mac";}
 }
 else if(n>=200 && n<=280){
    cout<<"you won a Pack of Kurkure"<<endl;
    if(n>=200 && n<=240){
        cout<<"Chilli Kurkure";}
        else{
            cout<<"Onion Kurkure";}
 }
 else if(n>=1100 && n<=1500){
    cout<<"you won a Cyclek"<<endl;
    if(n>=1100 && n<=1300){
        cout<<"Brand:Avon Cycle";}
        else{
            cout<<"Brand:Hero Cycle";}
 }
 else if(n>50 && n<=80){
    cout<<"you won a Bike"<<endl;
    if(n>50 && n<=65){
        cout<<"Model:Bullet";}
        else{
            cout<<"Model:Rajdoot";}
 }
else{
    cout<<"Better luck next time";}
    return 0;
}