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
    int removeDuplicates(vector<int>& nums) {
        int k = 1,unique = 1, n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[i-1] != nums[i]){
                nums[unique++]=nums[i];
                k ++;
            }
        }
        return k;
    }
};