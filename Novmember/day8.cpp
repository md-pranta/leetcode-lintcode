#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x = abs(sx - fx);
        int y = abs(sy - fy);

        if(x == 0 and y == 0 and t==1)return false;
        return t>=max(x, y);
    }
};