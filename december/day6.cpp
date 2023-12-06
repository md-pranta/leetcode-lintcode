class Solution {
public:
    int totalMoney(int n) {
        int ans = 0, temp = 7, cnt = n/7, re = n%7;
        while(cnt--){
            ans += ((temp +1)*temp)/2 - ((temp-6)*(temp-7))/2;
            temp++;
        }
        re += (temp-7);
        ans += ((re +1)*re)/2 - ((temp-6)*(temp-7))/2;
        return ans;
    }
};