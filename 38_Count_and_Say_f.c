class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }

        if (n > 1){
            return say(countAndSay(n - 1));
        }
        return "";
    }

    string say(string n){
        cout<<"-----"<<endl;
        cout<<n<<endl;
        string output = "";
        vector<int> temp;
        int now = 0;
        int n_num;
        for(int i = 0; i < n.size(); i++){
            n_num = (int)n[i] - 48;
            if(n_num == now) {
                temp.push_back(now);
            }else{
                if(now != 0){
                    cout<<now<<endl;
                    output += to_string(temp.size());
                    output += to_string(now);
                }
                now = n_num;
                temp.clear();
                temp.push_back(now);
            }
        }
        if(now != 0){
            cout<<now<<endl;
            output += to_string(temp.size());
            output += to_string(now);
        }
        cout<<output<<endl;
        return output;
    }
};

//time<23.44%
//space<33.04%