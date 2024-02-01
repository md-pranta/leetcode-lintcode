#Quetion is:
#2966. Divide Array Into Arrays With Max Difference
class Solution:
    def divideArray(self, nums: List[int], k: int) -> List[List[int]]:
        nums.sort()
        ans = []
        i = 2
        end = len(nums)
        while i < end:
            if nums[i] - nums[i-2] <= k:
                ans.append([nums[i-2],nums[i-1],nums[i]])
                i+=3
            else:
                return []
        return ans