#include <iostream>
#include <string>
using namespace std;
int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;
	int l = 0, maxLen = 0, changes = 0;
    for (int r = 0; r < s.size(); r++) {
        if (s[r] != 'a') {
			changes++;
		}
        while (changes > k) {
            if (s[l] != 'a') {
				changes--;
			}
            l++;
        }
        maxLen = max(maxLen, r - l + 1);
	}
	int l1 =0, maxLen1= 0, changes1= 0;
    for (int r = 0; r < s.size(); r++) {
        if (s[r]!='b') {
			changes1++;
		}
        while (changes1 > k) {
            if (s[l1]!='b') {
				changes1--;
			}
            l1++;
        }
        maxLen1=max(maxLen1,r-l1+1);
	}

    cout << max(maxLen,maxLen1);
    return 0;
}
