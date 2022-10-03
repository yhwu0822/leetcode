class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int output = 0;
        int index = 0;
        while(index < colors.length()){
            int temp = index;
            //cout<<colors[temp];
            index++;
            while(colors[temp] == colors[index]){
                //cout<<colors[index];
                index++;
            }
            if((temp+1) != index){
                for(int i = temp; i < index; i++){
                    output += neededTime[i];
                }
                int max = *max_element(neededTime.begin()+temp, neededTime.begin()+index);
                output -= max;
            }
            //cout<<"\n"<<temp<<","<<index<<"\n";
        }
        return output;
    }
};


//time<97.87%
//space<50.05%