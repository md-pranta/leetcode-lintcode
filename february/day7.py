class Solution:
    def frequencySort(self, s: str) -> str:
        dic = defaultdict(int)

        for cha in s:
            dic[cha]+=1
        
        dic2 = dict(sorted(dic.items(),key=lambda x: x[1],reverse=True))

        ans = ''
        for x in dic2:
            ans+=x*dic2[x]
        return ans