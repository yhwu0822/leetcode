class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> temp;
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    cout<<board[i][j]<<endl;
                    if(count(temp.begin(), temp.end(), board[i][j]))
                        return false;
                    else
                        temp.push_back(board[i][j]);
                }
            }
            cout<<"-----"<<endl;
            temp.clear();
            for (int j = 0; j < 9; j++){
                if(board[j][i] != '.'){
                    cout<<board[j][i]<<endl;
                    if(count(temp.begin(), temp.end(), board[j][i]))
                        return false;
                    else
                        temp.push_back(board[j][i]);
                }
            }
            cout<<"-----"<<endl;
            temp.clear();
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){

                for (int k = 0; k < 3; k++){
                    if(board[3*i][3*j+k] != '.'){
                        cout<<board[3*i][3*j+k]<<endl;
                        if(count(temp.begin(), temp.end(), board[3*i][3*j+k]))
                            return false;
                        else
                            temp.push_back(board[3*i][3*j+k]);
                    }
                    if(board[3*i+1][3*j+k] != '.'){
                        cout<<board[3*i+1][3*j+k]<<endl;
                        if(count(temp.begin(), temp.end(), board[3*i+1][3*j+k]))
                            return false;
                        else
                            temp.push_back(board[3*i+1][3*j+k]);
                    }
                    if(board[3*i+2][3*j+k] != '.'){
                        cout<<board[3*i+2][3*j+k]<<endl;
                        if(count(temp.begin(), temp.end(), board[3*i+2][3*j+k]))
                            return false;
                        else
                            temp.push_back(board[3*i+2][3*j+k]);
                    }
                }
                cout<<"-----"<<endl;
                temp.clear();
            }
        }
        return true;
    }
};

//92.97
//72.48