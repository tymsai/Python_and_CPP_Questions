class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        S=''.join(sorted(s))
        T=''.join(sorted(t))
        if len(S)==len(T):
            i=0
            while(i<len(S)):
                if(S[i]!=T[i]):
                    return False
                i+=1
            return True
        return False
