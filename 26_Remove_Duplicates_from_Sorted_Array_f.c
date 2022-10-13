class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int head = -1;
        int temp;

        for (int i = 0; i< nums.size() ; i++){
            if (nums[i] != temp){
                head += 1;
                nums[head] = nums[i];
                temp = nums[i];
            }
        }

        for (int i = 0; i< nums.size() ; i++){
            cout<<nums[i]<<endl;
        }
        cout<<"-----"<<head+1<<endl;





        return head+1;
    }
};

//time<86.11%
//space<36.72%