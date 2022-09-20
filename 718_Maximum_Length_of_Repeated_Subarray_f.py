class Solution(object):
    def findLength(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """

        if len(nums1) > len(nums2):
            temp = nums1
            nums2 = nums1
            nums1 = temp

        a = 0
        b = 0
        temp = 0
        output = 0
        for i in range(len(nums1)):
            temp_nums2 = list(nums2)      #要維持num2不變 所以不能用 temp_num2 = nums2
            while 1 == 1:
                try:
                    b = temp_nums2.index(nums1[i])
                    a = i

                    while nums1[a] == temp_nums2[b]:
                        a += 1
                        b += 1
                        temp += 1
                        if a == len(nums1) or b == len(temp_nums2):
                            break
                    if temp > output:
                        output = temp
                    temp_nums2.remove(nums1[i])
                    temp = 0
                except Exception as e:
                    break
        return output


#time limit exceeded
#但我沒想法了




