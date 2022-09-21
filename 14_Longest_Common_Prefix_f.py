class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """

        output = ""
        index = 0

        while index < len(strs[0]):

            output += strs[0][index]

            for i in range(len(strs)):
                if output != strs[i][:len(output)]:
                    return output[:-1]

            index += 1

        return output

#time<92.28%
#space<9.79%