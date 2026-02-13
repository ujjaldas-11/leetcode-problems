# leet code 50

def pow(x, n):
    if x == 0:
        return 0
    elif n == 0:
        return 1
        
    res = x ** (n // 2)
    res = res * res
        
    if n % 2 == 1:
        return res * x
        
    return res
    
res = pow(2.00000, -2)
print(res)