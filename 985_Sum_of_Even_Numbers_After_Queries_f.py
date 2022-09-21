class Solution(object):
    def sumEvenAfterQueries(self, nums, queries):
        """
        :type nums: List[int]
        :type queries: List[List[int]]
        :rtype: List[int]
        """

        output = []
        temp = 0

        for i in range(len(nums)):
            if (nums[i] % 2) == 0:
                temp += nums[i]

        for i in range(len(queries)):
            if (nums[queries[i][1]] % 2) == 0:  # even

                if (queries[i][0] % 2) == 0:  # + even

                    temp += queries[i][0]

                else:
                    temp -= nums[queries[i][1]]

            else:  # odd
                if (queries[i][0] % 2) != 0:  # + ood
                    temp += (nums[queries[i][1]] + queries[i][0])

            output.append(temp)

            nums[queries[i][1]] += queries[i][0]

        return output


#time<28.20%
#space<50.00%