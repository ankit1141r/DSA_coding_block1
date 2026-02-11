#include <iostream>
using namespace std;
int main() {

    int min1,max1,c=0,d;
    cin>>min1>>max1>>d;

    while(min1<=max1){

       c=(min1-32)*5/9;
       
       cout<< min1 <<" "<<c<<endl;
       min1+=d;
           }
return 0;
}