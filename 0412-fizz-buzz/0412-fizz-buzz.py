class Solution:
    def convert(self, number: int) -> str:
        if (number % 5 == 0 and number % 3 == 0):
            return "FizzBuzz"
        if number % 5 == 0:
            return "Buzz"
        if number % 3 == 0:
            return "Fizz"
        return str(number)

    def fizzBuzz(self, n: int) -> List[str]:
        result = []
        for i in range(1, n + 1):
            result.append(self.convert(i))
        return result
        