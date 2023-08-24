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
    int heightChecker(vector<int>& heights) {
        vector<int> arr= heights;
        sort(arr.begin(), arr.end());
        int cnt = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i]!=arr[i])cnt++;
        }
        return cnt;
    }
};