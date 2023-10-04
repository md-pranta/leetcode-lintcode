#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long a=1; a* a <= c; a++){
            double b = c - a * a;
            if(sqrt(b)== int(b))return true;
        }
        return false;
    }
};