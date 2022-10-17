class Solution {
public:
    bool checkIfPangram(string sentence) {
        set <char>table ( begin( sentence ) , end( sentence ) );
        if (table.size() == 26)
            return true;
        return false;
    }
};

//time:65.37%
//space:31.31%