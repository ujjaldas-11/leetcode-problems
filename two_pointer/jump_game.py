def jump_game(nums: list[int]):

    l, r = 0, len(nums) - 1

    while l <= r:
        currLength = nums[l]
        if l + currLength >= r:
            print(currLength)
            return True
        l += 1
    return False


print(jump_game([3,2,1,0,4]))
