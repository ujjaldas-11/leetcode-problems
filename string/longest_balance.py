def longest_balance(str):
    map = {}
    ans = ""
    cnt = 0
    
    for i in str:
        for j in range(i, len(str)):
            ans += j
            cnt += 1
        else:
            return len(ans)
    
str= "abbac"
print(longest_balance(str))