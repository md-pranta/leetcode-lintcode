#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int i = 1; i < points.size(); i++){
            int currentX = points[i-1][0], currentY = points[i-1][1];
            int targetX = points[i][0], targetY = points[i][1];

            ans += max(abs(targetX-currentX), abs(targetY-currentY));

        }
        return ans;
    }
};