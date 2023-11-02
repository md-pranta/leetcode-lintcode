#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool findd(char c){
        c = tolower(c);
        if(c == 'a' or  c == 'e' or c == 'i' or  c == 'o' or c == 'u')return true;
        else return false;
    }
    string reverseVowels(string s) {
        int l = 0, r = s.length()-1;
        while(l < r){
            if(!findd(s[l]))l++;
            else if(!findd(s[r]))r--;
            else swap(s[l++], s[r--]);
        }
        return s;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution a;
    cout<<a.reverseVowels("Leetcode");
    return 0;
}