#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l=0,r=nums.size()-1,maxi=0;
        while(l<r)maxi=max(nums[l++]+nums[r--],maxi);
        return maxi; 
    }
};