class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly;
        int index = 1;
        while(ugly.size() < n){
            if(isUgly(index))
                ugly.push_back(index);
            index++;
        }
        return ugly[ugly.size() - 1];
    }
    bool isUgly(int n) {
        if (n==0)
            return false;
        while(n != 1){
            if(n%2 == 0)
                n/=2;
            else if(n%3 == 0)
                n/=3;
            else if(n%5 == 0)
                n/=5;
            else
                return false;
        }
        return true;
    }
};

//time limit exceeded