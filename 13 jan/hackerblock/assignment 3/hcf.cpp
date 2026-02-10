#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n1 ,n2,hcf;
    cin >> n1;
    cin>>n2;
          for(int i=1 ; i<=max(n1,n2) ; i++){
            if(n1%i==0 && n2%i==0){
                hcf=i;
             }
          }
          cout<<hcf<<endl;
     return 0;
}