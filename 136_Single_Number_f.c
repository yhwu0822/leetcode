class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++){
            if (s.count(nums[i]))
                s.erase(nums[i]);
            else
                s.insert(nums[i]);
        }
        for (const auto &i : s) {
            return i;
        }
        return 0;
    }
};

//5.91
//8.14
//超爛