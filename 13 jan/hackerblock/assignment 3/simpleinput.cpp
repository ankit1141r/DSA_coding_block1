#include <iostream>
using namespace std;
int main() {
int n,n2=0;


while(cin>>n){
    if(n2+n>=0){
     cout<<n<<endl;
	 n2=n2+n;
    }
    else break;
}

return 0;
}