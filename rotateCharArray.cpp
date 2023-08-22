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
    /**
     * @param s: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(vector<char> &s, int offset) {
        // write your code here
        int n = s.size();
        if(n==0)return;
        offset %= n;
        reverse(s, 0, n-1);
        reverse(s, 0, offset-1);
        reverse(s, offset, n-1);
    }
    void reverse(vector<char> &s,int l,int r){
        while(l<r)swap(s[l++],s[r--]);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    return 0;
}