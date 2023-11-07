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
    string mergeAlternately(string word1, string word2) {
        int l = word1.size(), r = word2.size(),i=0;
        string ans = "";
        while(i<max(l, r)){
            if(i < l)ans.push_back(word1[i]);
            if(i < r)ans.push_back(word2[i]);
            i++;
        }
        return ans;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << "4777777777777777777777777777777777";
    return 0;
}