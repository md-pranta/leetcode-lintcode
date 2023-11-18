#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, r = 0,ans = 0, n = nums.size();
        long s = 0;
        while(r<n){
            long temp = nums[r];
            s += temp;

            while((r-l+1)*temp - s > k){
                s -= nums[l];
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};