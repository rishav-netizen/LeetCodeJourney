class Solution:
    def largestOddNumber(self, num: str) -> str:
        l = 0
        largest = ""
        for h in range(len(num)):
            current = int(num[h])
            if current % 2 != 0:
                largest = num[l : h + 1]
        else:
            l += 1
        if largest == -1:
            return ""
        return largest