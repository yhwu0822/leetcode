class Solution(object):
    def findOriginalArray(self, changed):
        """
        :type changed: List[int]
        :rtype: List[int]
        """

        output = []
        if len(changed) % 2 != 0 or changed == []:
            return output

        changed.sort()
        match = [0] * len(changed)

        for i in range(len(changed)):
            if match[i] == (-1):
                continue

            try:
                target = changed.index((changed[i] * 2), i + 1)
                if target:
                    if match[target] == (-1):
                        if changed[target + 1] == (changed[i] * 2):
                            match[i] = 1
                            match[target + 1] = -1
                    else:
                        match[i] = 1
                        match[target] = -1
            except:
                continue

        for i in range(len(changed)):
            if match[i] == 1:
                output.append(changed[i])

        if (2 * len(output)) != len(changed):
            return []

        return output

#用match 複雜度O(n)
#超時