def longestConsicutive(nums):
    if len(nums) == 0:
        return 0
    
    hashSet = set(nums)
    
    longest = 0
    
    for i in hashSet:
        if (i - 1) not in hashSet:
            curr = i
            length = 1
            
            while curr + 1 in hashSet:
                curr += 1
                length += 1
            longest = max(length, longest)
    return longest
    
    
nums = [1,0,1,2]
     
res = longestConsicutive(nums)
print(res)