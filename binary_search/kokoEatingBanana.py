import math


def minEatingSpeed(piles, h):
    l, r = 1, max(piles)
    res = r

    while l <= r:
        k = (l + r) // 2
        hours = 0

        for p in piles:
            hours += math.ceil(p / k)

        if hours <= h:
            res = min(res, k)
            r = k - 1
        else:
            l = k + 1

    return res


piles = [30, 23, 17, 11]
h = 6

result = minEatingSpeed(piles, h)
print('minimum speed is: ',result)
