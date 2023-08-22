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
    int minimumSum(int n, int k) {
        int ans = 0, number = 1;
        
        while(n){
            if(number >= k || (k/2) >= number){
                ans+=number;
                n--;
            }
            number++;
        }
        return number;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution a;
    //vector<int>v = {1, 0, 2, 3, 0, 4, 5 , 0};
    cout<<a.minimumSum(5, 4);
    return 0;
}