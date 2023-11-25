class Solution:
    def getSumAbsoluteDifferences(self, nums: list[int]) -> list[int]:
        n = len(nums)
        prefix = [nums[0]]
        for i in range(1,n):
            prefix.append(prefix[i-1]+nums[i])
        result = []
        for i in range(n):
            left = prefix[i]-nums[i]
            left = nums[i] * i - left

            right = prefix[n-1]-prefix[i]
            right -= nums[i] * (n-1-i)

            result.append(left+right)
        return result