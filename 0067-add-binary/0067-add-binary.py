class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if len(a) > len(b):
            b = "0" * (len(a) - len(b)) + b
        elif len(a) < len(b):
            a = "0" * (len(b) - len(a)) + a
        
        result = ""
        carry = 0
        for i in range(len(a) - 1, -1, -1):
            if int(a[i]) + int(b[i]) + carry == 2:
                result += "0"
                carry = 1
            elif int(a[i]) + int(b[i]) + carry == 3:
                result += "1"
                carry = 1
            else:
                result += str(int(a[i]) + int(b[i]) + carry)
                carry = 0
        if carry:
            result += str(carry)
        
        return result[::-1]

        
        