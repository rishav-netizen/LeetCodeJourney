class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size(), l2 = nums2.size();
        int l = l1 + l2;
        int *merged = new int[l]();
        int i = 0, j= 0, k = 0;
        while (i < l1 && j < l2)
        {
            if (nums1[i] < nums2[j])
            {
                merged[k++] = nums1[i++];
            }
            else
            {
                merged[k++] = nums2[j++];
            }
            
        }
        for(; i < l1; i++)
        {
            merged[k++] = nums1[i];
        }
        for(; j < l2; j++)
        {
            merged[k++] = nums2[j];
        }

        double result = 0.0;
        if (l % 2 == 0)
            result = (merged[l/2] + merged[l/2 - 1]) / 2.0;
        else
            result = merged[l/2] * 1.0;

        return result;
    }
};