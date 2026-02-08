def maxiMumSubArraySum(nums, target):
    left, total = 0, 0
    res = float('inf')
    for r in nums:
        total += nums[r]
        
        while total >= target:
            res = min(r - left + 1, res)
            total -= nums[left]
            left += 1 
   
    return res if res != float('inf') else -1

nums = [2,3,1,2,4,3]
target = 7

res = maxiMumSubArraySum(nums, target)
print(res)      