#include <iostream>
using namespace std;
int main() {
    int n ,n1,equation;
    cin >> n;
    cin>>n1;
    for(int i=1; i<=n;i++){
       equation= 3*i+2;
       if(equation%n1!=0){
        cout<<equation<<endl;
       }
       else{
        n++;
       }
    }
        
     
    return 0;
}