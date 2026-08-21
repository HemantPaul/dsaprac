# 1456. Maximum Number of Vowels in a Substring of Given Length

class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        low = 0
        high = k
        count = 0

        
        for i in range(k):
            if s[i] in "aeiou":
                count += 1

        maxC = count

        while high < len(s):

            
            if s[low] in "aeiou":
                count -= 1

            
            if s[high] in "aeiou":
                count += 1

            low += 1
            high += 1

            maxC = max(maxC, count)

        return maxC


""" class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        maxC = 0

        for i in range(len(s) - k + 1):
            count = 0

            for j in range(i, i + k):
                if s[j] in "aeiou":
                    count += 1

            maxC = max(maxC, count)

        return maxC """
    
    