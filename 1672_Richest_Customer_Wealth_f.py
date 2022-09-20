class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """

        temp = []

        for i in accounts:
            temp.append(sum(i))

        return max(temp)


#time<25.70%
#space<51.73%