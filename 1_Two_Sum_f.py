class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        newNums = list(nums)
        newNums.sort()

        head = 0
        tail = len(newNums) - 1
        temp = newNums[head] + newNums[tail]
        while temp != target:

            if temp > target:
                tail -= 1
            else:
                head += 1
            temp = newNums[head] + newNums[tail]

        output = []
        output.append(nums.index(newNums[head]))
        if newNums[head] == newNums[tail]:
            nums[nums.index(newNums[head])] = 10000000000
            output.append(nums.index(newNums[tail]))
        else:
            output.append(nums.index(newNums[tail]))

        return output

#time<59.79%
#space<44.32%