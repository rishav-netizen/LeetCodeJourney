class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        reversed = ""
        for i in range(len(words) - 1, -1, -1):
            reversed += words[i]
            if (i > 0):
                reversed += " "
        return reversed