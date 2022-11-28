class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mapS;
        map<char, int> mapT;

        if ( s.size() != t.size() ){
            return false;
        }
        for( int i = 0; i < s.size(); i++ ){
            mapS[s[i]]++;
            mapT[t[i]]++;
        }
        if ( mapS.size() != mapT.size() ){
            return false;
        }
        for( auto s: mapS){
            if (s.second != mapT[s.first]){
                return false;
            }
        }
        return true;
    }
};

//77.35
//82.61