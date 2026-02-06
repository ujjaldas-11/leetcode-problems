def sortColors(nums):
    if len(nums) <= 1:
        return
    
    mid = len(nums) // 2
    left_half = nums[:mid]
    right_half = nums[mid:]
    
    sortColors(left_half)
    sortColors(right_half)
    
    i = j = k = 0
    
    while i < len(left_half) and j < len(right_half):
        if left_half[i] > right_half[j]:
            nums[k] = right_half[j]
            j += 1
        else:
            nums[k] = left_half[i]
            i += 1
        k += 1
    
    while i < len(left_half):
        nums[k] = left_half[i]
        i += 1
        k += 1
    
    while j < len(right_half):
        nums[k] = right_half[j]
        j += 1
        k += 1

if __name__ == "__main__":
    nums = [2, 0, 2, 1, 1, 0]
    sortColors(nums)
    print(nums)