class Solution(object):
    def findOriginalArray(self, changed):
        """
        :type changed: List[int]
        :rtype: List[int]
        """

        ans = []
        # answer storing array
        vacans = []
        # when we need to return vacant array
        if len(changed) % 2:
            return ans
        # when we will have odd number of integer in our input(double array can't be in odd number)

        changed.sort()
        # sorting

        temp = Counter(changed)
        # storing the frequencies
        for i in changed:
            if temp[i] == 0:
                # if we have already decreased it's value when we were checking y/2 value, like 2,4 we will remove 4 also when we will check 2 but our iteration will come again on 4.
                continue
            else:
                if temp.get(2 * i, 0) >= 1:
                    # if we have both y and y*2, store in our ans array
                    ans.append(i)
                    # decrease the frequency of y and y*2
                    temp[2 * i] -= 1
                    temp[i] -= 1
                else:
                    return vacans
        return ans

#time<19.72%
#space<34.21%