def maximumTripletValue(nums):
        n = len(nums)
        pre = [0]*n
        suf = [0]*n
        
        pre[0] = nums[0]
        for i in range(1, n):
            pre[i] = max(pre[i-1], nums[i])
        
        
        suf[-1] = nums[-1]
        for i in range(n-2,-1,-1):
            suf[i] = max(suf[i+1], nums[i])
        
        ans = 0
        for i in range(n):
            ans = max(ans, (pre[i]-nums[i])*suf[i])
        return ans
print(maximumTripletValue([2, 3, 1]))