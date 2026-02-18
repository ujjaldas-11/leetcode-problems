def isPallindrome(s):
    s = ''.join(c.lower() for c in s if c.isalnum())
    print(s)
    return s == s[::-1]

s = "Was it a car or a cat I saw?"

print(isPallindrome(s))
    