def twosum(nums, target):
    hash_map = {}
    
    for i, n in enumerate(nums):
        diff = target - n
        
        if diff in hash_map:
            return [hash_map[diff], i]
        hash_map[n] = i
    return

    
nums = [3,2,4]
target = 6

res = twosum(nums, target)

print(res)