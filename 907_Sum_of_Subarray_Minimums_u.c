class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int output = 0;
        int temp;
        for (int i = 0; i < arr.size(); i++){
            temp = INT_MAX;
            for (int j = i; j < arr.size(); j++){
                temp = min(temp, arr[j]);
                cout<<temp<<endl;
                output += temp;
                cout<<":"<<output<<endl;
                cout<<"-----"<<endl;
            }
            if (output >= 100000007)
                output %= 1000000007;
        }
        return output;
    }
};

//Time Limit Exceeded