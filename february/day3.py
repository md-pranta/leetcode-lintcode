class Solution:
    def maxSumAfterPartitioning(self, arr, k):
        n = len(arr)
        dp = [0]*(n+1)

        for left in range(n-1,-1,-1):
            current_max = 0
            right = min(n,left+k)

            for i in range(left,right):
                current_max = max(current_max,arr[i])
                dp[left] = max(dp[left], dp[i+1] + current_max*(i-left+1))
        return dp[0]

a = Solution()
print(a.maxSumAfterPartitioning([1,15,7,9,2,5,10],3))