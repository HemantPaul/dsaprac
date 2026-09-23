# 1004. Max Consecutive Ones III

class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        low = 0
        high = 0
        zerocount = 0
        length = 0

        while high < len(nums):

            if nums[high] == 0:
                zerocount += 1

            while zerocount > k:
                if nums[low] == 0:
                    zerocount -= 1
                low += 1

            length = max(length, high - low + 1)

            high += 1

        return length