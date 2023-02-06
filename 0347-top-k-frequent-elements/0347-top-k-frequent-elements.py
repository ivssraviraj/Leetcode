class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        HashMap = {}
        lst = [[] for i in range(len(nums)+1)]
        
        for i in nums:
            HashMap[i]=1+HashMap.get(i,0)
            lst[HashMap[i]].append(i)
            if HashMap[i] >1:
                lst[HashMap[i]-1].remove(i)

        count =0
        ans = []
        for i in range(len(lst)):
            for j in lst[len(lst)-1-i]:
                if count < k:
                    count+=1
                    ans.append(j)
                else:
                    break
        return ans
                

        