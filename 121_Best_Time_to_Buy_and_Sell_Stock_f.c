class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int output = 0;
        int min = prices[0];
        int max = prices[0];

        for (int i = 1; i < prices.size(); i++){
            if (prices[i] > max){
                max = prices[i];
                if (max-min > output)
                    output = max - min;
            }else if (prices[i] < min){
                min = prices[i];
                max = prices[i];
            }
        }
        return output;
    }
};

//97.53
//51.39