class Solution(object):
    def concatenatedBinary(self, n):
        """
        :type n: int
        :rtype: int
        """

        output = 0

        for i in range(1, n + 1):

            temp = 0

            while i > (2 ** temp - 1):
                temp += 1

            output = output * (2 ** temp)
            output += i
            output = output % 1000000007

        return output

#time<8.70%
#space<69.57%