class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        list1=set(nums)
        length=len(list1)
        largest=max(list1)
        if largest<1:
            return 1
        for i in range(1,largest+1):
            if i not in list1:
                return i 
                break
        return largest+1
