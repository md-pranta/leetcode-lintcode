class Solution(object):
    def threeSumMulti(self, A, target):
        MOD = 10**9 + 7
        ans = 0
        A.sort()

        for i, x in enumerate(A):
            T = target - x
            l, r = i+1, len(A) - 1

            while l < r:
                if A[l] + A[r] < T:
                    l += 1
                elif A[l] + A[r] > T:
                    r -= 1
                elif A[l] != A[r]:
                    left = right = 1
                    while l + 1 < r and A[l] == A[l+1]:
                        left += 1
                        l += 1
                    while r - 1 > l and A[r] == A[r-1]:
                        right += 1
                        r -= 1
                    ans += left * right
                    ans %= MOD
                    l += 1
                    r -= 1

                else:
                    ans += (r-l+1) * (r-l) // 2
                    ans %= MOD
                    break

        return ans