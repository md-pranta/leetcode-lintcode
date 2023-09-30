#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        for(auto element:nums){
            if(element==first || element == second || element==third)continue;
            if(element>first){
                third = second;
                second = first;
                first = element;
            }
            else if(element>second){
                third = second;
                second = element;
            }
            else if(element>third) third = element;
        }
        if(third == LONG_MIN)return first;
        return third;
    }
};