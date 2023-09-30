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
    vector<int> sortArrayByParity(vector<int>& nums) {
        ///method 1
        // for(int curr = 0, i = 0; i < nums.size(); i++){
        //     if(~nums[i]&1){
        //         swap(nums[i], nums[curr++]);
        //     }
        // }
        // return nums;

        //method 2
        int left = 0, right = nums.size()-1;
        while(left < right){
            if(nums[left]&1 and ~nums[right]&1) swap(nums[right--], nums[left++]);
            if(~nums[left]&1)left++;
            if(nums[right]&1)right--;
        }
    }
};