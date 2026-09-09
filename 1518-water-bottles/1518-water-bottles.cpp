class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        long long result = numBottles, newBottles = 0, remaining = 0;
        while(numBottles >= numExchange)
        {
            newBottles = numBottles/numExchange; 
            remaining = numBottles % numExchange;

            result += newBottles;
            numBottles = newBottles + remaining;
        }
        return result;
    }
};