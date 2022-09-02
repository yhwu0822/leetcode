class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        ans = []
        for i in range(n):
            if (i + 1) % 3 == 0:
                if (i + 1) % 5 == 0:
                    ans.append("FizzBuzz")
                    continue
                ans.append("Fizz")
            elif (i + 1) % 5 == 0:
                ans.append("Buzz")
            else:
                ans.append(str(i+1))
        return ans


test = Solution()
print(test.fizzBuzz(15))

#time<94.32%
#space<15.68%