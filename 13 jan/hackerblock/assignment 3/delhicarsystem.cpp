#include<iostream>
using namespace std;
int sum(int n){
		int odd=0,r,even=0;
		while(n!=0){
		 r=n%10;
		 odd=odd+r;
		 n=n/10;
		 r=n%10;
		 even=even+r;
		 n=n/10;
		}
			if(odd%3==0 || even%4==0){
				return 1;
			}
			else return 0;
	}
int main() {

	int n_c,n;
	int divide;
	cin>>n_c;
	int arr[n_c];
	for(int i=0; i<sizeof(arr[n_c]);i++){
		cin>>arr[i];
	}
	for(int j=0;j<sizeof(arr[n_c]);j++){
		n=arr[j];
		divide=sum(n);
     if(divide==1){
		 cout<<"Yes"<<endl;
	 }
	 else {
		 cout<<"No"<<endl;
	 }
	}
  

	return 0;
}