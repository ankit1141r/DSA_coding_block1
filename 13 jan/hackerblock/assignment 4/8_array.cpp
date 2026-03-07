#include<iostream>
using namespace std;
void truth(int arr[],int m){
	int a,b;
	cin>>a;
	cin>>b;
	int count=0;
	for(int i=0;i<m;i++){
		if(a%arr[i]==0){
			count++;
		}
			}
	if(count>=b){
		cout<<"Yes"<<endl;
	}
	else {
		cout<<"No"<<endl;
	}
}
int main() {
	int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++){
		truth(arr,m);
	}
	return 0;
}