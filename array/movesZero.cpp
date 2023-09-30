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
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(),zero = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]){
                swap(nums[i],nums[zero]);
                zero++;
            }
        }
    }
};