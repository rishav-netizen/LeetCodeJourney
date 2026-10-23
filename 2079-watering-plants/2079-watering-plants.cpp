class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int steps = 0, current = capacity, location = 0;
        while (location < plants.size())
        {
            if(current >= plants[location]) 
            {
                current -= plants[location];
                plants[location] = 0;
                location += 1;
                steps += 1;
            }
            else
            {
                steps += (2 * location);
                current = capacity;
            }
        }
        return steps;
    }
};