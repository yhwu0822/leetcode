class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size() / 2;
        for (int i = 0; i < (nums.size() - size); i++){
            if(nums[i] == nums[i + size]){
                return nums[i];
            }
        }
        return 0;
    }
};

//23.5
//60.66