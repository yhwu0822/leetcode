class Solution(object):
    def pushDominoes(self, dominoes):
        """
        :type dominoes: str
        :rtype: str
        """

        head = int(0)
        middle = int(0)
        tail = int(0)

        output = ""

        while middle < len(dominoes):

            if dominoes[middle] == "L":
                head = middle - 1
                while head >= 0:
                    if dominoes[head] == "L":
                        output = output[:head + 1]
                        for i in range(middle - head):
                            output += 'L'
                        middle += 1
                        break
                    head -= 1

                if head < 0:
                    output = output[:head + 1]
                    for i in range(middle + 1):
                        output += 'L'
                    middle += 1

            elif dominoes[middle] == "R":
                head = middle
                tail = head + 1
                while tail < len(dominoes):

                    if dominoes[tail] == "R":
                        for i in range(head, tail):
                            output += 'R'
                        middle = tail

                        break
                    elif dominoes[tail] == "L":
                        if (tail - head) % 2 == 0:

                            middle = int(head + ((tail - head) / 2))
                            for i in range(head, middle):
                                output += 'R'
                            output += '.'
                            for i in range(middle + 1, tail + 1):
                                output += 'L'

                        else:
                            half = int((tail - head - 1) / 2)
                            for i in range(head, head + half + 1):
                                output += 'R'
                            for i in range(head + half + 1, tail + 1):
                                output += 'L'
                        middle = tail + 1
                        break
                    tail += 1
                if tail >= len(dominoes):
                    for i in range(head, len(dominoes)):
                        output += 'R'
                    middle = len(dominoes)

            elif dominoes[middle] == ".":
                output += '.'
                middle += 1

        return output

#time<13.89%
#space<100%