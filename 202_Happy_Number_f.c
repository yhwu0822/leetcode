class Solution {
public:
    bool isHappy(int n) {
        vector<int> temp;
        vector<int> loop;
        int test = 0;
        while(test != 1){
            temp.clear();
            while(n != 0){
                cout<<n%10<<endl;
                temp.push_back(n%10);
                n /= 10;
            }
            test = 0;
            for(int i = 0; i < temp.size(); i++){
                test += (temp[i]*temp[i]);
            }
            cout<<test<<endl;
            if (find(loop.begin(), loop.end(), test) != loop.end())
                return false;
            loop.push_back(test);
            n = test;
            cout<<"-----"<<endl;
        }
        return true;
    }
};


//100%
//40.82%