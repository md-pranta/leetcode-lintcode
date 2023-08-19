/*
Given an integer array nums sorted in non-decreasing order,remove the duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially.
The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

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
        int current = 1;
        for(int i = 1; i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[current++] = nums[i];
            }
        }
        return current;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    return 0;
}