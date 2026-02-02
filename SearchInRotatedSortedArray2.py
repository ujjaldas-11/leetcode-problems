class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        
        l,r = 0 , len(nums) - 1
        
        nums.sort()

        while l <= r:
            mid = (l + r) // 2

            if nums[mid] == target:
                return True
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1
        return False


sol = Solution()

nums = [2,5,6,0,0,1,2]
target = 8

res = sol.search(nums, target) 

print(res)