class Solution {
public:
    int mySqrt(int x) {
        long long  left = 0;
        long long  right = x;
        long long  mid = (0 + x) / 2;


        while ((mid * mid > x) || ((mid + 1)*(mid + 1) < x)){
            if (mid * mid > x){
                right = mid;
                mid = (left + right) / 2;
            }else if ((mid + 1)*(mid + 1) < x){
                left = mid;
                mid = (left + right) / 2;
            }
        }

        if ((mid + 1)*(mid + 1) == x)
            return mid+1;
        return mid;
    }
};

//time<100%
//space<73.66%