class Solution:
    def SearchRange(self, nums, target):
        def SearchFirst(nums, target):
            l,r = 0, len(nums) - 1
            result = -1

            while l <= r:
                mid = (l + r) // 2

                if nums[mid] == target:
                    result = mid
                    r = mid - 1  # keep searching in left part 
                elif nums[mid] < target:
                    l = mid + 1
                else:
                    r = mid - 1

            return result
        

        def SearchLast(nums, target):
            l,r = 0, len(nums) - 1
            result = -1

            while l <= r:
                mid = (l + r) // 2

                if nums[mid] == target:
                    result = mid
                    l = mid + 1  # keep searching in left part 
                elif nums[mid] < target:
                    l = mid + 1
                else:
                    r = mid - 1

            return result

        first = SearchFirst(nums, target)
        if first == -1:
            return [-1, -1]
        last = SearchLast(nums, target)
        return [first, last]


sol = Solution()

nums = [5,7,7,8,8,10]
target = 8

res = sol.SearchRange(nums, target)

print("list: ", res)