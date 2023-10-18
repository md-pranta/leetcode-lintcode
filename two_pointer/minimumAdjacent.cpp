#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int getMinSwaps(string num, int k) {
        string s = num;

        int res = 0;

        while(k--) next_permutation(s.begin(),s.end());

    
        for(int i = 0; i < num.size(); ++i)
        {
            if(num[i] != s[i])
            {
               int j = i + 1;

               while(num[j] != s[i]) j++;
               
               while(j > i)
               {
                   swap(num[j], num[j-1]);
                   res++;
                   j--;
               }
               
            }
        }

        return res;
    }
};