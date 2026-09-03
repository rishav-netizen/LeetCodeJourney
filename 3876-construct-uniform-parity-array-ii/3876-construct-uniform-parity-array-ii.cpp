class Solution {
public:
    bool isEven(int n)
    {
        return (n % 10) % 2 == 0;
    }
    bool uniformArray(vector<int>& nums1) 
    {
        int min_even = INT_MAX, min_odd = INT_MAX, n = nums1.size(), odds = 0, evens = 0, smallest = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(isEven(nums1[i]))
            {
                min_even = min(nums1[i], min_even);
                evens++;
            }
            else
            {
                min_odd = min(nums1[i], min_odd);
                odds++;
            }
            smallest = min(nums1[i], smallest);
        }

        if(odds == n || evens == n)
            return true;

        if(isEven(smallest))
        {
            for(int i = 0; i < n; i++)
            {
                if(!isEven(nums1[i]))
                {
                    if(nums1[i] > min_even)
                    {
                        return false;
                    }
                }
            }
        }
        // else
        // {
        //     for(int i = 0; i < n; i++)
        //     {
        //         if(isEven(nums1[i]))
        //         {
        //             if(nums1[i] > min_even)
        //             {
        //                 return false;
        //             }
        //         }
        //     }

        // }
        return true;
    }
};