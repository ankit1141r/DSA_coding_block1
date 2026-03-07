#include <iostream>
#include <vector>
using namespace std;
int trap(int n) {
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    int left = 0 , right = n-1;
    int answer = 0;
    int rightmax = 0 , leftmax = 0;
    while(left<right){
        if(arr[left]<=arr[right]){
            if(leftmax>=arr[left]){
                answer+=leftmax-arr[left];
            }
            else{
                leftmax=arr[left];
            }
            left++;
        }
        else{
            if(rightmax>=arr[right]){
                answer+=rightmax-arr[right];
            }
            else{
                rightmax=arr[right];
            }
            right--;
        }
    }
    cout<<answer<<endl;
	return 0;
}
int main() {
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		trap(m);
	}


    
    return 0;
}