#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007

/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val.
The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    return 0;
}