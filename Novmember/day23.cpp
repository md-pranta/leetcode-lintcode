#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i = 0; i < l.size(); i++){
            vector<int>v(nums.begin()+l[i], nums.begin()+r[i]+1);
            ans.push_back(check(v));
        }
        return ans;
    }
    bool check(vector<int>& v){
        sort(v.begin(), v.end());
        int dif = v[1]-v[0];

        for(int i = 2; i<v.size(); i++){
            if(dif != v[i]-v[i-1])return false;
        }
        return true;

    }
};