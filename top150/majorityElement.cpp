#include<bits/stdc++.h>
using namespace std;
// time complexity o(n)
//space complexity o(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto v:nums){
            mp[v] ++;
        }
        int ans = -1;
        int cnt = 0;
        for(auto& v:mp){
            if(v.second > cnt){
                ans = v.first;
                cnt = v.second;
            }
        }
        return ans;
    }
};

// time complexity o(n)
//space complexity o(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element, cnt = 0;
        for(auto & num:nums){
            if(cnt == 0){
                element = num;
                cnt = 1;
            }
            else if(element == num)cnt ++;
            else cnt--;
        }
        return element;
    }
};