class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> temp = matrix[0];

        for (int i = 1; i < m ; i++){
            for (int j = n-1; j > 0; j--)
                temp[j] = temp[j-1];
            temp[0] = matrix[i][0];

            cout<<"-----"<<endl<<"{";
            for (int k = 0; k < n; k++)
                cout<<temp[k]<<",";
            cout<<"}"<<endl<<"-----"<<endl;

            if (temp != matrix[i])
                return false;

        }

        cout<<"----------"<<endl;
        return true;
    }
};