# 643. Maximum Average Subarray I
class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        l = 0
        h = k - 1
        sum = 0

        for i in range(k):
            sum += nums[i]

        maxS = sum

        for i in range(l, len(nums)):
            l += 1
            h += 1

            if h == len(nums):
                break

            sum = sum - nums[l - 1] + nums[h]
            maxS = max(maxS, sum)

        return maxS / k