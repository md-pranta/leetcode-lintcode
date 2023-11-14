#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    unordered_map<int, vector<int>> graph;
    
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        for (auto v : adjacentPairs) {
            graph[v[0]].push_back(v[1]);
            graph[v[1]].push_back(v[0]);
        }
        
        int root = 0;
        for (auto v : graph) {
            if (v.second.size() == 1) {
                root = v.first;
                break;
            }
        }
        
        vector<int> v;
        dfs(root, INT_MAX, v);
        return v;
    }
    
    void dfs(int curr, int pre, vector<int>& ans) {
        ans.push_back(curr);
        for (int neighbor : graph[curr]) {
            if (neighbor == pre)continue;
            dfs(neighbor, curr, ans);
        }
    }
};
