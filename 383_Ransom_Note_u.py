#想了一會才想到只要算次數就好...
import numpy as np


class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """

        count = np.zeros(26)
        for i in range(len(magazine)):
            count[ord(magazine[i])-97] += 1
        for i in range(len(ransomNote)):
            count[ord(ransomNote[i]) - 97] -= 1
            if count[ord(ransomNote[i]) - 97] < 0:
                return False
        return True

solution = Solution()
ran = "aab"
mag = "baa"
print(solution.canConstruct(ran, mag))