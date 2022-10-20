class Solution {
public:
    string intToRoman(int num) {
        string temp = to_string(num);
        string output = "";

        vector<char> index = {'I','X','C','M'};
        vector<char> half = {'V','L','D'};

        int i = 0;

        while ( i < temp.size()){
            int right = num % 10;
            num /= 10;

            if (right < 4){
                for (int j = 0; j < right; j++)
                    output.insert(output.begin(), index[i]);
            }else if (right == 4){
                output.insert(output.begin(), half[i]);
                output.insert(output.begin(), index[i]);
            }else if (right == 5){
                output.insert(output.begin(), half[i]);
            }else if (right > 5 & right < 9){
                for (int j = 5; j < right; j++)
                    output.insert(output.begin(), index[i]);
                output.insert(output.begin(), half[i]);

            }else if (right == 9){
                output.insert(output.begin(), index[i+1]);
                output.insert(output.begin(), index[i]);
            }




            cout<<right<<endl;
            i++;
        }
        cout<<"-----"<<endl;


        return output;
    }
};

//time<75.07%
//space<35.14%