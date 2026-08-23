class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        l = len(digits)
        number = 0
        for i in range(0, l):
            number += digits[i] * (10 ** (l - i - 1))
        number += 1

        result = []
        for each in str(number):
            result.append(int(each))
        return result
        
