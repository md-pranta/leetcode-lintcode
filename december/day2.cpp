#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int>counts;
        for(auto c: chars) counts[c]++;

        int answer = 0;
        for(auto w : words){
            bool flag = true;
            unordered_map<char, int>temp;
            for(auto c:w)temp[c]++;

            for(auto [c, s]:temp){
                if(counts[c]<s){
                    flag = false;
                    break;
                }
                
            }
            if(flag) answer += w.size();

        }
        return answer;

    }
};