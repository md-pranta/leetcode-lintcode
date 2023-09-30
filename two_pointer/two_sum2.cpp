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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        vector<int>v;
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            else if(numbers[l]+numbers[r]>target)r--;
            else l++;
        }
        return v;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution a;
    vector<int>v={-10,-8,-2,1,2,5,6};
    vector<int>vv = a.twoSum(v, 0);
    for(auto b:vv)cout<<b<<" ";
    
    return 0;
}