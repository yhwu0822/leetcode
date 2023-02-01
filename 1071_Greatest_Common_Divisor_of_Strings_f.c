class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string output = "";
        vector<string> str1gcd = getWordGcd(str1);
        vector<string> str2gcd = getWordGcd(str2);

        if(str1gcd.size() > str2gcd.size()){
            for(int i = str2gcd.size()-1; i >= 0; i--){
                if(find(str1gcd.begin(), str1gcd.end(), str2gcd[i])!=str1gcd.end()){
                    cout<<str2gcd[i]<<endl;
                    return str2gcd[i];
                }
            }
        }else{
            for(int i = str1gcd.size()-1; i >= 0; i--){
                if(find(str2gcd.begin(), str2gcd.end(), str1gcd[i])!=str2gcd.end()){
                    cout<<str1gcd[i]<<endl;
                    return str1gcd[i];
                }
            }
        }
        return output;
    }

    vector<string> getWordGcd(string input){
        vector<string> output;
        string temp;
        string gcd;
        int times;
        for(int i = 1; i <= input.size() / 2; i++){
            temp = "";
            gcd = input.substr (0,i);
            if(input.size() % gcd.size() == 0){
                times = input.size()/gcd.size();
                for(int j = 0; j < times; j++){
                    temp += gcd;
                }
                cout<<temp<<endl;
                if(temp == input){
                    output.push_back(gcd);
                }
            }
        }
        output.push_back(input);
        return output;
    }
};

//19.46
//9.46