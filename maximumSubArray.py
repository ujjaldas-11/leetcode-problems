class Solution:
    def MaxSubArray(self, nums):
        maxSub = nums[0]
        currSum = 0

        for n in nums:
            if currSum < 0:
                currSum = 0
            
            currSum += n
            maxSub = max(maxSub, currSum)

        return maxSub

sol = Solution()
nums = [5,4,-1,7,8]
res = sol.MaxSubArray(nums)

print("ans:", res)