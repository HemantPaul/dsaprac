# container with max solution:
class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxA = 0

        for i in range(len(height)):
            for j in range(i + 1, len(height)):
                w = j - i
                h = min(height[i], height[j])
                area = w * h

                maxA=max(maxA,area)

        return max







# using two pointers 
class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        maxArea = 0

        while left < right:
            width = right - left
            h = min(height[left], height[right])

            area = width * h
            maxArea = max(maxArea, area)

            if height[left] < height[right]:
                left += 1
            else:
                right -= 1

        return maxArea