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
    int nextGreaterElement(int n) {
        string num = to_string(n);
        int len = num.size();
        int i, j;
        for(i = len-2; i>=0; i--){
            if(num[i]<num[i+1])break;
        }
        if(i<0) return -1;
        for(j = len-1; j >= i; j--){
            if(num[j]>num[i])break;
        }
        swap(num[i], num[j]);
        reverse(num.begin() + i+1, num.end());
        long ans = stol(num);
        if(ans>INT_MAX) return -1;

        return ans;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    return 0;
}