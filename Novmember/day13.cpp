#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string sortVowels(string s) {
        int n = s.size();
        unordered_map<char, int>ump;

        for(auto c:s){
            if(isVowel(c))ump[c]++;
        }

        string all = "AEIOUaeiou";
        int m = 0;
        for(int i = 0; i< n; i++){
            if(isVowel(s[i])){
                while(ump[all[m]] == 0) m++;
                ump[all[m]]--;
                s[i]=all[m];
            }

        }
        return s;
    }

};
int main(){
    Solution s;
    cout<<s.sortVowels("lEetcOde")<<endl;
    return 0;
}