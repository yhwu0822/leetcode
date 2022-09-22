class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        output = ""
        temp = 0

        for i in range(len(s)):
            if s[i] == " ":
                for j in range(i - 1, temp - 1, -1):
                    output += s[j]
                output += " "
                temp = i + 1
            elif i == (len(s) - 1):
                for j in range(i, temp - 1, -1):
                    output += s[j]

        return output

#time<5.00%
#space<9.36%