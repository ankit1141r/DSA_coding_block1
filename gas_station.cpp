#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

    int start(vector<int> gas,vector<int> cost){
        int total=0;
        int remain=0;
        int ans=0;
        for(int i=0;i<gas.size();i++){
            total+=(gas[i]-cost[i]);
            remain+=(gas[i]-cost[i]);
            if(remain<0){
                remain=0;
                ans=i+1;
            }
        }
        if(total>=0){
            return ans;
        }
        return -1;
    }
    int main() {
        return 0;
    }
