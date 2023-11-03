#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i = 1, j=0, x = target.size();
        vector<string>ans;
        while(j<x){
            while(i<target[j]){
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
            ans.push_back("Push");
            j++;
            i++;
        }
        return ans;
    }
};