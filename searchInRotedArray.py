
def search(nums, target):
    l, r = 0, len(nums) - 1
        
    while l <= r :
        mid = (l + r) // 2

        if target == nums[mid]:
            return mid
            
            #left part
        if nums[l] <= nums[mid]:
            if target > nums[mid] or target < nums[l]:
               l = mid + 1
            else:
                r = mid - 1 
        # right part
        else:
            if target < nums[mid] or target > nums[r]:
                r = mid - 1
            else:
                l = mid + 1
    return -1

nums = [4,5,6,7,0,1,2,3]
target = 0

res = search(nums, target)
print("answer: ", res)

