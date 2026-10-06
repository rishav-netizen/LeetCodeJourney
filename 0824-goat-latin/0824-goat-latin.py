class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        words = sentence.split()
        result = ""
        index: int = 1 
        for word in words:
            if word[0].lower() in ['a', 'e', 'i', 'o', 'u']:
                word += "ma"
            else:
                word = word[1:] + word[0] + "ma"
            word += ('a' * index)
            result += word
            result += " "
            index+=1
        return result.strip()
