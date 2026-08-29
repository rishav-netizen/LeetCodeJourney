class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int A = (ay2 - ay1) * (ax2 - ax1);
        int B = (by2 - by1) * (bx2 - bx1);
        int common = 0;
        int height = min(ax2, bx2) - max(ax1, bx1);
        int width = min(ay2, by2) - max(ay1, by1);
        if (height > 0 && width > 0)
        {
            common = height * width;
        }
        return A + B - common;
    }
};