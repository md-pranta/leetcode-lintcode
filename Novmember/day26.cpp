#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), ans  = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] != 0 && i > 0)matrix[i][j] += matrix[i-1][j];
            }
            vector<int>v=matrix[i];
            sort(v.begin(), v.end(), greater());
            for(int k = 0; k<m; k++) ans = max(ans, v[k]*(k+1));
        }
        return ans;
    }
};
// time:n.m(nlog(n))
// space:n.M