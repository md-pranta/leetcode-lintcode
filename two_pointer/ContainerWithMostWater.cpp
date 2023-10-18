#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, ans = 0;

        while(l < r){
            if(height[l]<=height[r]){
                ans = max((r-l)*height[l++], ans);
            }
            else{
                ans = max((r-l)*height[r--], ans);
            }
        }
        return ans;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution a;
    vector<int>v={1,8,6,2,5,4,8,3,7};
    cout<<a.maxArea(v);
    
    return 0;
}