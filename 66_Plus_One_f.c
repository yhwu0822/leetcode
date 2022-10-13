class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int temp = 1;
        for (int i = digits.size()-1; i>=0; i--){

            digits[i] += temp;
            if (digits[i] > 9){
                digits[i] = 0;
                temp = 1;
            }else{
                temp = 0;
                break;
            }
        }
        if (temp)
            digits.insert(digits.begin(),1);

        return digits;
    }
};

