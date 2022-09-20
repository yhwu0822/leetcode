class Solution(object):
    def numberOfWeakCharacters(self, properties):
        """
        :type properties: List[List[int]]
        :rtype: int
        """

        sortAtk = sorted(properties, key=lambda s: (s[0], -s[1]), reverse=True)
        print(sortAtk)
        weak = 0
        D = 0

        for i in sortAtk:
            if i[1] < D:
                weak += 1
            else:
                D = i[1]
        return weak

        # 上面超時然後底下沒有??
#         # sort properties in descending order of attack but ascending order of defense
#         properties.sort(key=lambda x: (-x[0], x[1]))

#         max_defense = 0
#         weak_count = 0

#         for _, defense in properties:
#             # for any given element:
#             # - every attack must be less than or equal to what we have already seen
#             # - if the attack is the same, then the defense must be greater than what we have already seen for this attack value
#             if defense < max_defense:
#                 weak_count += 1
#             else:
#                 max_defense = defense

#         return weak_count
