def romanToInt(str):
    dict = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000, None: 0}
    res  = 0
    
    for a,b in zip(str, str[1:]):
        if  dict[a] < dict[b]:
            res -= dict[a]
        else:
            res += dict[a]
            
    print(dict[str[-1]])
    return res + dict[str[-1]]
    
str = "MCMXCIX"
print(romanToInt(str))
    



