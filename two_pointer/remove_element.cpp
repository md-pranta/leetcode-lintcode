#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int l = 0, r = n-1;
        while(r>=0 and l <= r){
            if(nums[r] == val)r--;
            else{
                if(nums[l] == val){
                    swap(nums[l],nums[r]);
                    r--;
                }
                l++;
            }
        }
        return l;
        
    }
};