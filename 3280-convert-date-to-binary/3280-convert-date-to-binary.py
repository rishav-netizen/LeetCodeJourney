class Solution:
    def convertDateToBinary(self, date: str) -> str:
        dates = date.split("-")
        return str(bin(int(dates[0])))[2:] + "-" + str(bin(int(dates[1])))[2:] + "-" + str(bin(int(dates[2])))[2:]