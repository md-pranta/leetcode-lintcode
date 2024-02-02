
#problem statement is
#1291. Sequential Digits
class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        ans = []
        temp = [12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,2345,3456,4567,5678,6789,12345,
        23456,34567,45678,56789,123456,234567,345678,456789,1234567,2345678,3456789,12345678,23456789,123456789]
        for val in temp:
            if val < low:continue
            if val > high:break
            ans.append(val)
        return ans

#2nd solution
class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        ans = []
        queue = deque(range(1,10))
        while queue:
            val = queue.popleft()
            if low <= val <= high:
                ans.append(val)
            tem = val % 10
            if tem < 9: queue.append(val*10 + tem + 1)
        return ans