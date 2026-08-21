class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j=0,count=0
        for i in range(len(t)):
            if(j < len(s) and t[i] == s[j]):
                count=count+1
                j=j+1
        if(count==len(s)):
            return True
        return False
                
        