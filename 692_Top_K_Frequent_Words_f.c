bool sortByVal(const pair<string, int> &a,
               const pair<string, int> &b)
{
    if (a.second == b.second)
        return (a.first < b.first);
    return (a.second > b.second);
}

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> count;

        for (int i = 0; i < words.size(); i++){
            count[words[i]] ++;
        }

        // create a empty vector of pairs
        vector<pair<string, int>> vec;

        // copy key-value pairs from the map to the vector
        map<string, int> :: iterator it2;
        for (it2=count.begin(); it2!=count.end(); it2++)
        {
            vec.push_back(make_pair(it2->first, it2->second));
        }

        // // sort the vector by increasing order of its pair's second value
        sort(vec.begin(), vec.end(), sortByVal);

        vector<string> output;

        for (int i = 0; i < k; i++)
        {
            output.push_back(vec[i].first);
        }

        return output;
    }
};

//time<45.47%
//space<39.56%