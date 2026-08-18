class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        # for goes till that range cuz after the len of needle isnt remaining. no point to check
        for i in range(len(haystack) - len(needle) + 1):
            count = 0 
            
            while count < len(needle):
                if needle[count] != haystack[i + count]:
                    break
                count += 1
            
            if count == len(needle):
                return i

        return -1