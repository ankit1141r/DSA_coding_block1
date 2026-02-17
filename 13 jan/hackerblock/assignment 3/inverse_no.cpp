#include<iostream>
using namespace std;
int main() {
	long long n,r,count=0,count1=0;
	cin>>n;
	long long temp=n;
	int l=0;
	while(temp!=0){
		temp/=10;
		l++;
	}
	int arr[l-1];
	for(int i=1;i<=l;i++){
		r=n%10;
		arr[r-1]=i;
		n/=10;
}
for(int i=0;i<=sizeof(arr[l-1]);i++){
	count=count*10+arr[i];
}
while(count!=0){
	r=count%10;
	count1=count1*10+r;
	count/=10;
}
cout<<count1;
	return 0;
}