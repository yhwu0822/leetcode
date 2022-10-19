class Solution {
public:
    string longestPalindrome(string s) {

        int max_length = 0;
        string output = "";
        int left,right;



        for(float i = 0; i < s.size(); i += 0.5){
            if (floorf(i) != i){
                left = (int)floorf(i);
                right = (int)floorf(i) + 1;
            }else{
                left = i;
                right = i;
            }
            while((s[left] == s[right])){
                left -= 1;
                right += 1;
                if ((left < 0) | (right == s.size()))
                    break;
            }
            left += 1;
            right -= 1;
            if ((right - left + 1) > max_length){
                max_length = (right - left + 1);
                output = s.substr(left, max_length);
            }
        }


        return output;
    }
};

//time<74.73%
//space<57.10%