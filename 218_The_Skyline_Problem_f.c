class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {

        vector<vector<int>> output;
        vector<pair<int, int>> points;

        for(auto b: buildings){
            points.push_back({b[0], -b[2]});
            points.push_back({b[1], b[2]});
        }



        sort(points.begin(), points.end());




        // for(auto p: points){
        //     cout<<p.first<<","<<p.second<<"\n";
        // }
        // cout<<"____________\n";


        multiset<int> tempHeight;

        for(int i = 0; i < points.size(); i++){

            int currentPoint = points[i].first;
            int heightAtCurrentPoint = points[i].second;
            // cout<<"["<<currentPoint<<","<<heightAtCurrentPoint<<"]:\n";

            if (heightAtCurrentPoint < 0) {

                if(!tempHeight.empty()) {
                    if (-heightAtCurrentPoint > *tempHeight.rbegin()) {
                        output.push_back({currentPoint, -heightAtCurrentPoint});
                    }
                }else {
                    output.push_back({currentPoint, -heightAtCurrentPoint});
                }
                tempHeight.insert(-heightAtCurrentPoint);
                // cout<<*tempHeight.rbegin()<<"*\n";
            }else {
                tempHeight.erase(tempHeight.find(heightAtCurrentPoint));
                if(!tempHeight.empty()) {
                    if (heightAtCurrentPoint > *tempHeight.rbegin()){
                        output.push_back({currentPoint, *tempHeight.rbegin()});
                        // cout<<*tempHeight.rbegin()<<"***\n";
                    }
                }else {
                    output.push_back({currentPoint, 0});
                    // cout<<"***\n";
                }
            }

            // cout<<"-----\n";
            // for (auto h: tempHeight){
            //     cout<<h<<"\n";
            // }
            // cout<<"-----\n";
        }

        // for(auto p: output){
        //     cout<<p[0]<<","<<p[1]<<"\n";
        // }
        // cout<<"____________\n";

        return output;
    }

};