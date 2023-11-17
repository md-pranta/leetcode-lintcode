#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        vector<pair<int, int>>v(26, {-1, -1});
        for(int i = 0; i<n; i++){
            int idx = s[i]-'a';
            if(v[idx].first==-1) v[idx].first = i;
            v[idx].second = i;
        }
        int total = 0;
        for(int i = 0; i<26; i++){
            if(v[i].first==-1)continue;

            int l=v[i].first+1, r = v[i].second-1;

            unordered_set<char>unique;
            while(l<=r){
                unique.insert(s[l++]);
                unique.insert(s[r--]);
            }
            total += unique.size();
        }
        return total;
    }
};