class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> q;
        for (int i = 0; i < s.size(); i++){
            if (q.size() == 0)
                q.push(s[i]);
            else if (s[i] != q.top())
                q.push(s[i]);
            else
                q.pop();
        }
        string output = "";
        int temp = q.size();
        for (int i = 0; i < temp; i++){
            output += q.top();
            q.pop();
        }
        reverse(output.begin(), output.end());
        return output;
    }
};

//time<67.79%
//space<26.24%