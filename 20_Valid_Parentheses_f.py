class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        temp = []

        for i in range(len(s)):

            if s[i] == "(":
                temp.append("(")
            elif s[i] == "[":
                temp.append("[")
            elif s[i] == "{":
                temp.append("{")
            elif s[i] == ")":
                if temp == []:
                    return False
                if temp.pop() != "(":
                    return False
            elif s[i] == "]":
                if temp == []:
                    return False
                if temp.pop() != "[":
                    return False
            elif s[i] == "}":
                if temp == []:
                    return False
                if temp.pop() != "{":
                    return False

        if len(temp):
            return False
        return True

#time<94.54%
#space<5.18%