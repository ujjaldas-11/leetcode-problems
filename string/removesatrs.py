#leetcode 2390 remove stras

def remove_stars(s: str) -> str:
    stack = []
    
    for c in str:
        if c == "*":
            stack.pop()
        else:
            stack.append(c)
    return "".join(stack)    
   
    
str = "leet**co*de"

print(remove_stars(str))