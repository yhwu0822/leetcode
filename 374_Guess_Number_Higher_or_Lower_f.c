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
        int max = INT_MAX;
        int min = 0;
        int temp;
        while (true){
            temp = min + (max - min) / 2;
            if (guess(temp) > 0)
                min = temp + 1;
            else if (guess(temp) < 0)
                max = temp - 1;
            else
                return temp;
        }
    }
};

//100
//22.94