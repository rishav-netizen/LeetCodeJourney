class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        rev1 = version1.split('.')
        rev2 = version2.split('.')
        l1 = len(rev1)
        l2 = len(rev2)

        for i in range(max(l1, l2)):
            if i < l1:
                r1 = int(rev1[i])
            else: 
                r1 = 0
            if i < l2:
                r2 = int(rev2[i])
            else: 
                r2 = 0

            if r1 > r2:
                return 1
            elif r1 < r2:
                return -1
        return 0

