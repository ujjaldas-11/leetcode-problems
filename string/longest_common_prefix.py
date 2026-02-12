class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        str = ""
        strs = sorted(strs)

        i = 0
        length = len(strs) - 1

        while i < len(strs[0]):
            if strs[0][i] == strs[length][i]:
                str += strs[0][i]
                i += 1
            else:
                break
        return str 
        
sol = Solution()

strs = ["flower","flow","flight"]

res = sol.longestCommonPrefix(strs)

print(res)