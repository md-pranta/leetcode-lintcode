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
    vector<vector<int>> threeSum(vector<int> &nums){
        int  i=0;
        sort(nums.begin(), nums.end());
        vector<vector<int>>v;
        while(i<nums.size()){
            int l=i+1,r=nums.size()-1;
            int target = -nums[i];
            while(l<r){
                if(nums[l]+nums[r]>target)r--;
                else if(nums[l] + nums[r] < target)l++;
                else{
                    vector<int>c={-target, nums[l], nums[r]};
                    v.push_back(c);
                    while(l<r and c[1]==nums[l])l++;
                    while(l<r and c[2]==nums[r])r--;
                }
            }
            while(i<nums.size()-1 and nums[i] == nums[i+1])i++;
            i++;
        }
        return v;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution a;
    vector<int>v={-1,0,1,2,-1,-4};
    vector<vector<int>>vv = a.threeSum(v);
    for(auto b:vv){
        for(auto m:b)cout<<m<<" ";
        cout<<endl;
    }
    
    return 0;
}