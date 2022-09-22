class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        output = ""
        temp = ""

        for i in range(len(s)):
            temp += s[(-1) - i]

        cut = temp.split(' ')
        for i in range(len(cut)):
            output += cut[(-1) - i]
            output += " "
        output = output[:-1]

        return output

#time<5.00%
#space<6.99%