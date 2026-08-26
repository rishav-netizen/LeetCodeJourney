class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        best = ""
        oneCount = 0
        left = 0
        for right in range(len(s)):
            if s[right] == "1":
                oneCount += 1

            if oneCount == k:
                while s[left] == "0":
                    left += 1
                
                current = s[left : right + 1]
                if (best == "" or len(current) < len(best) or (len(current) == len(best) and current < best)):
                    best = current
                
                oneCount -= 1
                left += 1
        return best


                
