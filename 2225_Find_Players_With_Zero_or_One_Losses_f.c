class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> count;
        vector<vector<int>> output = {{}, {}};
        for (int i = 0; i < matches.size(); i++){
            count[matches[i][0]] += 0;
            count[matches[i][1]] += 1;
        }
        for(auto s: count){
            //cout<<s.first<<","<<s.second<<endl;
            if (s.second == 0){
                output[0].push_back(s.first);
            }else if (s.second == 1){
                output[1].push_back(s.first);
            }
        }
        return output;
    }
};

//55.50
//84.9