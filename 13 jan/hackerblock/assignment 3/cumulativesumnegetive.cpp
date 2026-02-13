#include <iostream>
using namespace std;
int main() {
int n,n2=0,b=0;
cin>>n;
int arr[n];
int brr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
n2+=arr[i];
    if(n2>=0){
        cout<<arr[i]<<endl;
    }
    else break;
}
       // brr[i]=arr[i];
//         b++;
//     }
//     else break;
//     }

// for(int i=0;i<n;i++){
//   cout<<brr[i]<<endl;

// }
return 0;
}