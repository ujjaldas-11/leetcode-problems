class Solution:
    def validAnangram(self, s, t):
        if len(s) != len(t): return False

        s1 = sorted(s)
        t1 = sorted(t)

        print(s1, t1)

        return s1 == t1

sol = Solution()

s = "anagaram"
t = "ret"

res = sol.validAnangram(s, t)

print(res)