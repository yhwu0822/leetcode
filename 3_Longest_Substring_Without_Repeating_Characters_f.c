class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 1)
            return 1;
        string temp = "";
        int output = 0;
        for(int i = 0; i < s.size(); i++){
            int index = temp.find(s[i]);
            if (index!=std::string::npos){
                cout<<index<<endl;
                if (temp.size() > output)
                    output = temp.size();
                temp = temp.substr(index+1) + s[i];
            }else{
                cout<<-1<<endl;
                temp += s[i];
            }
            cout<<"---"<<temp<<endl;
        }
        if (temp.size() > output)
            output = temp.size();

        return output;
    }
};

//time<56.27%
//space<11.15%