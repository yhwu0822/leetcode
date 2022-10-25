class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
         string temp1,temp2;

        for(int i = 0; i < word1.size(); i++){
            temp1 += word1[i];
        }
        for(int i = 0; i < word2.size(); i++){
            temp2 += word2[i];
        }
        cout<<temp1<<endl<<temp2<<endl;

        if (temp1.size() != temp2.size()){
            return false;
        }else{
            for (int j=0; j<temp1.size(); j++){
                if (temp1[j] != temp2[j])
                    return false;
            }
        }
        return true;
    }
};

//time<76.62%
//space<89.94%