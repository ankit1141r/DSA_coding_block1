#include <iostream>
#include <cmath>
using namespace std;
int arm(int n){
	int og = n;
    int temp = n;
    int sum = 0;
    int l = 0;
    while (temp != 0)
    {
        temp = temp / 10;
        l++;
    }
    while (n != 0)
    {
        int k = n % 10;
        sum = sum + pow(k, l);
        n /= 10;
    }
    if (og == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int n1,n2,armstrong;
    cin >>n1>>n2;

	for(int n=n1;n<=n2;n++){
		armstrong=arm(n);
		if(armstrong==1){
			cout<<n<<endl;
		}
	}

    
    return 0;
}