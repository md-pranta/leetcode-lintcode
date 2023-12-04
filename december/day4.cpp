#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestGoodInteger(string num) {
        int l = 0, r = 2;
        char ans = '\0';
        while(r<num.size()){
            if(num[l]==num[r] && num[l+1]==num[l]){
                ans = max(ans, num[l]);
                l=r;
                r = r + 2;
            }
            r++;
            l++;
        }
        return ans == '\0'?"":string(3, ans);
    }
};