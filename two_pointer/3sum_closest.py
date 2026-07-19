from typing_extensions import List

class Solution:
    def four_sum(nums: List[int], target: int) -> int:
        result = []
        
        for i in nums:
            if (nums[i] + nums[i+1] + nums[i+2] + nums[i+3]) == target:
               subNums = [nums[i], nums[i+1], nums[i+2], nums[i+3]] 
               if subNums not in result:
                   result.append[subNums]
        
        
sol = Solution()

nums = [1,0,-1,0,-2,2]
target = 0

res = sol.four_sum(nums, target)
    
print(res)