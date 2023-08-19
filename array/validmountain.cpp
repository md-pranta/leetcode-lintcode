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
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r=n-1;
        if(n<3)return false;
        while(l<n-1 and arr[l] < arr[l+1])l++;
        while(r>0 and arr[r] < arr[r-1])r--;
        if(l==0 || r==n-1)return false;
        return l==r;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    
    return 0;
}