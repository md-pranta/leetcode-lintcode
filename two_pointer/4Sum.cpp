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
    vector<vector<int>> fourSum(vector<int> &nums, int target){
        int  i=0;
        sort(nums.begin(), nums.end());
        vector<vector<int>>v;
        while(i<nums.size()){
            int current  = nums[i];
            int j = i+1;
            while (j<nums.size()){
                current += nums[j];
                int l=j+1,r=nums.size()-1;
                while(l<r){
                    long long x = (1LL*nums[l]+1LL*nums[r]+1LL*current);
                    if(x>target)r--;
                    else if(x < target)l++;
                    else{
                        vector<int>c={nums[i], nums[j], nums[l], nums[r]};
                        v.push_back(c);
                        while(l<r and c[2]==nums[l])l++;
                        while(l<r and c[3]==nums[r])r--;
                    }
                }
                current -= nums[j];
                while(j<nums.size()-1 and nums[j+1]==nums[j])j++;
                j++;
                
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
    vector<int>v={1,0,-1,0,-2,2};
    vector<vector<int>>vv = a.fourSum(v, 0);
    for(auto b:vv){
        for(auto m:b)cout<<m<<" ";
        cout<<endl;
    }
    
    return 0;
}