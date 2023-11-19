#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int unique = 0, answer = 0;
        for(int i = 1; i< nums.size(); i++){
            if(nums[i] != nums[i-1])unique++;
            answer += unique;
        }
        return answer;
    }
};