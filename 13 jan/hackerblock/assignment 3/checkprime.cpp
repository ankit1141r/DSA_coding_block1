#include <iostream>
using namespace std;
int main() {
    int n ,n1,count=0;
    cin >> n;
    
    for(int i=2; i<=n-1;i++){
      
       if(n%i==0){
        count++;}
       }
        if(count==0){
        cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    
     
    return 0;
}