class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1, water = 0, lmax = height[l], rmax = height[r];

        while(l < r)
        {
            if (height[l] <= height[r])
            {
                if(height[l] >= lmax)
                {
                    lmax = height[l];
                }
                else
                {
                    water += lmax - height[l];
                }
                l++;
            }
            else if (height[l] > height[r])
            {
                if(height[r] >= rmax)
                {
                    rmax = height[r];
                }
                else
                {
                    water += rmax - height[r];
                }
                r--;
            }
        }

        return water;
    }
};