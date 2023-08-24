#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = nums.size()-1, k = 0;
        while(l <= r){
            if(nums[l]==val and nums[r]!=val){
                swap(nums[l++], nums[r--]);
                k++;
            }
            if(nums[l]!=val){
                l++;
                k++;
            }
            if(nums[r]==val)r--;
        }
        return k;
    }
};