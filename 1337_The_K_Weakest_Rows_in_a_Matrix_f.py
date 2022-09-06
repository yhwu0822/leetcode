class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """
        output = []
        num = []
        for i in range(k):
            output.append(101)
            num.append(101)
        for line in range(len(mat)):
            needIn = False
            index = k-1
            while mat[line].count(1) < num[index]:
                needIn = True
                index -= 1
                if index == -1:
                    break
            index += 1
            if needIn:
                for i in range(k-1 - 1, index - 1, -1):
                    output[i+1] = output[i]
                    num[i+1] = num[i]
                output[index] = line
                num[index] = mat[line].count(1)
        return output

#time<53.67%
#space<91.15%
