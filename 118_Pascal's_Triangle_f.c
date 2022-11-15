class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        vector<int> temp;
        for (int i = 0; i < numRows; i++){
            temp = {};
            temp.push_back(1);
            for (int j = 1; j <= i; j++){
                if (j == i)
                    temp.push_back(1);
                else
                    temp.push_back(output[i-1][j-1] + output[i-1][j]);
            }
            output.push_back(temp);
        }
        return output;
    }
};

//43.68%
//30.83%