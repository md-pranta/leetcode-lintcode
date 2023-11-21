#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int n = nums.size(), ans = 0, m = 1e9+7;
        unordered_map<int, int>ump;
        for(int i = 0; i < n; i++){
            int temp = 0;
            int val = nums[i];
            while(val){
                temp = temp*10 + val%10;
                val/=10;
            }
            ans = (ans + ump[nums[i]-temp])% m;
            ump[nums[i]-temp] ++;
        }
        return ans;
    }
};