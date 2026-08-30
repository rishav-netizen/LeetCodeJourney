/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 0, u = n, our = 0;
        while(u>=l)
        {
            our = (u - l)/2 + l;
            if (guess(our) == 1)
                l = our + 1;
            else if (guess(our) == -1)
                u = our - 1;
            else
                break;
        }
        return our;
    }
};