class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int tail = 0;
        int temp;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                swap(nums[tail], nums[i]);
                tail++;
            }
        }
    }
};

//65.54
//58.99