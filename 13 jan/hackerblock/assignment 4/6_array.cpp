#include <iostream>
#include <algorithm>
using namespace std;

void flower(int n) {
    int arr[n];
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }

    int target;
    cin >> target;

    sort(arr, arr + n);

    int left = 0, right = n - 1;
    int a = 0, b = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            a = arr[left];
            b = arr[right];
            left++;   
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    cout << "Deepak should buy roses whose prices are " << a << " and " << b << "." << endl;
}

int main() {
    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> n;
        flower(n);
    }
    return 0;
}

