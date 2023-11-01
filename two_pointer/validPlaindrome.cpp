#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==0) return true;

        int l = 0, r = s.length()-1;
        while(l<=r){
            if(!isalpha(s[l])) l++;
            else if(!isalpha(s[r])) r--;
            else{
                if(tolower(s[l]) != tolower(s[r]))return false;
                l++;
                r--;

            }
        }
        return true; 
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution a;
    vector<int>v={1,8,6,2,5,4,8,3,7};
    cout<<a.isPalindrome("0P");
    
    return 0;
}
