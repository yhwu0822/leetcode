class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0
        neg_c = 0
        neg_x = 0
        neg_i = 0
        for i in range(len(s)):
            #print(s[i])
            if s[i] == 'M':
                ans += (1000-2*neg_c)
            elif s[i] == 'D':
                ans += (500-2*neg_c)
            elif s[i] == 'C':
                ans += (100-2*neg_x)
                neg_c = 100
            elif s[i] == 'L':
                ans += (50-2*neg_x)
            elif s[i] == 'X':
                ans += (10-2*neg_i)
                neg_x = 10
            elif s[i] == 'V':
                ans += (5-2*neg_i)
            elif s[i] == 'I':
                ans += 1
                neg_i = 1
        return ans


solution = Solution
print(solution.romanToInt(solution, 'MCMXCIV'))
