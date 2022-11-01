class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int height = grid.size();
        int width = grid[0].size();
        vector<int> out;

        for(int i = 0; i < width; i++){
            out.push_back(i);
        }
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                if (out[j] == -1)
                    continue;
                if (grid[i][out[j]] == 1){
                    if (out[j] == width-1)
                        out[j] = -1;
                    else{
                        if (grid[i][out[j]+1] == 1)
                            out[j]++;
                        else
                            out[j] = -1;
                    }
                }else{
                    if (out[j] == 0)
                        out[j] = -1;
                    else{
                        if (grid[i][out[j]-1] == -1)
                            out[j]--;
                        else
                            out[j] = -1;
                    }
                }
            }
//             for(int i = 0; i < width; i++){
//                 cout<<out[i]<<",";
//             }
//             cout<<endl<<"-----"<<endl;
        }
//         cout<<"-----------"<<endl;
        return out;
    }
};


//time<14.96%
//space<52.18%