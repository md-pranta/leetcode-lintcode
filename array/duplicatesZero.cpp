#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007
///Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right///
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int right = n + count(arr.begin(), arr.end(), 0);
        for(int i = n-1; i>=0;i--){
            if(--right<n){
                arr[right] = arr[i];
            }
            if(arr[i]==0 and --right<n){
                arr[right] = 0;
            }
        }
        
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution a;
    vector<int>v = {1, 0, 2, 3, 0, 4, 5 , 0};
    a.duplicateZeros(v);
    return 0;
}