class Solution:
    def numSubseq(self, nums: list[int], target: int) -> int:
        n, m = len(nums), 10**9+7
        nums.sort()

        cnt = 0
        l = 0
        r = n-1
        while(l<=r):
            if nums[l] + nums[r] <= target:
                cnt = (cnt + pow(2, r-l,m)) % m
                l += 1
            else:
                r -= 1
        return cnt