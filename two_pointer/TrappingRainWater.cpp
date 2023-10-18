#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        // int n = height.size();
        // int left_max[n],right_max[n],trap[n];
        // left_max[0] = 0;
        // right_max[n-1] = 0;
        // for(int i = 1; i< n; i++){
        //     left_max[i] = max(left_max[i-1], height[i-1]);
        // }

        // for(int i = n-2; i>=0; i--){
        //     right_max[i] = max(right_max[i+1], height[i+1]);
        // }
        // for(int i = 1; i < n-1; i++){
        //     trap[i] = min(left_max[i], right_max[i]);
        // }
        // int water = 0;
        // for(int i = 1; i < n-1; i++){
        //     water += max(0, trap[i]-height[i]);
        // }
        // return water;

        //by Two pointer
        int n = height.size(),water=0;
        int l=0, r = n-1, max_l=height[0], max_r=height[n-1];
        while(l<r){
            if(max_l <= max_r){
                max_l = max(max_l, height[++l]);
                water += max_l-height[l];
            }
            else {
                max_r = max(max_r, height[--r]);
                water += max_r-height[r];
            }
                
        }
        return water;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution a;
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<a.trap(v);
    
    return 0;
}