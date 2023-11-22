#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        queue<pair<int, int>>q;
        vector<int>v;
        q.push({0, 0});

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            v.push_back(nums[row][col]);

            if(col == 0 and row + 1 < nums.size()) q.push({row + 1, col});
            if(col + 1 < nums[row].size()) q.push({row, col + 1});


        }
        return v;

    }
};