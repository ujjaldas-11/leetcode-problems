class Solution:
    def containsDuplicate(self, nums, k):
        hashset = set()

        for i in range(len(nums)):
            if i > k:
                hashset.remove(nums[i - k - 1])

            if nums[i] in hashset:
                return True
            hashset.add(nums[i])

        return False


sol = Solution()

nums = [1,2,3,4,3]

res = sol.containsDuplicate(nums, 3)

print("result: ", res)

            

