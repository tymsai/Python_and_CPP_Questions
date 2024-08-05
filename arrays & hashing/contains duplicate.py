class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        listi=[]
        for n in nums:
            if n in listi:
                return True
            listi.append(n)
        return False
