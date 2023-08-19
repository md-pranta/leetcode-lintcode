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
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>s;
        for(int num:arr){
            if(s.find(num*2)!=s.end() || (num%2==0 && s.find(num/2)!= s.end()))
                return true;
            s.insert(num);
        }
        return false;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    return 0;
}