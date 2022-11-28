class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int output = 0;
        int temp;
        for (int i = 0; i < arr.size(); i++){
            for (int j = 0; j < (arr.size() - i); j++){
                temp = INT_MAX;
                for ( int k = j; k <= (j+i); k++){
                    temp = min(temp, arr[k]);
                    cout<<temp<<endl;
                }

                output += temp;
                cout<<":"<<output<<endl;
                cout<<"-----"<<endl;
                output %= 1000000007;
            }
        }
        return output;
    }
};

//Time Limit Exceeded