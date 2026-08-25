class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        patternList = list(pattern)
        wordList = s.split()
        pairs = dict()
        if(len(patternList) != len(wordList)):
            return False
        for key, item in zip(patternList, wordList):
            if key in pairs:
                if pairs[key] != item:
                    return False
            else:
                pairs[key] = item

        return len(pairs) == len(set(wordList))
        

