#用match下去做 直接超時

import numpy as np


class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """

        def toArray(data):
            catch = np.empty(len(data), dtype='str')
            for i in range(len(data)):
                catch[i] = str(data[i])
            return catch

        def quicksort(data, left, right):  # 輸入資料，和從兩邊開始的位置
            if left >= right:  # 如果左邊大於右邊，就跳出function
                return

            i = left  # 左邊的代理人
            j = right  # 右邊的代理人
            key = data[left]  # 基準點

            while i != j:
                while data[j] > key and i < j:  # 從右邊開始找，找比基準點小的值
                    j -= 1
                while data[i] <= key and i < j:  # 從左邊開始找，找比基準點大的值
                    i += 1
                if i < j:  # 當左右代理人沒有相遇時，互換值
                    data[i], data[j] = data[j], data[i]

            # 將基準點歸換至代理人相遇點
            data[left] = data[i]
            data[i] = key

            quicksort(data, left, i - 1)  # 繼續處理較小部分的子循環
            quicksort(data, i + 1, right)  # 繼續處理較大部分的子循環

        ranArray = toArray(ransomNote)
        quicksort(ranArray, 0, len(ranArray)-1)
        magArray = toArray(magazine)
        quicksort(magArray, 0, len(magArray) - 1)
        print(ranArray)
        print(magArray)

        j = 0
        if len(ranArray) > len(magArray):
            return False
        for i in range(len(ranArray)):
            if j >= len(magArray):
                return False
            while ranArray[i] != magArray[j]:
                j += 1
                if j >= len(magArray):
                    return False
            j += 1


        return True

solution = Solution()
ran = "aab"
mag = "baa"
print(solution.canConstruct(ran, mag))

