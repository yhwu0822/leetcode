class Solution(object):
    def numberOfSteps(self, num):
        """
        :type num: int
        :rtype: int
        """
        output = 0
        while num != 0:
            if num % 2 == 0:
                num /= 2
                output += 1
            else:
                num -= 1
                output += 1

        return output

#time<57.98%
#space<38.93%