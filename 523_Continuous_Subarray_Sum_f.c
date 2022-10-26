class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        set<int> before;
        set<int> temp;

        for (int i = 0; i < nums.size(); i++){
            nums[i] = nums[i] % k;
        }

        for (int i = 0; i < nums.size(); i++){
            temp = before;
            before.clear();
            for (auto s : temp) {
                if ((s + nums[i])%k == 0){
                    cout<<s<<","<<nums[i]<<endl;
                    cout<<endl<<"/////"<<endl;
                    return true;
                }else{
                    before.insert((s + nums[i])%k);
                }
            }
            before.insert(nums[i]);
        }
        return false;
    }
};

//Time limit exceed