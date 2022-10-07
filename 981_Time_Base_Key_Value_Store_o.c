class TimeMap {
public:

    unordered_map<string, vector<pair<int,string>> > mp;  // mp[key] = {[timestamp, value]};

    TimeMap() {

    }

    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end())    return "";
        else if(mp[key][0].first > timestamp)   return "";
        else{
            int low = 0, high = mp[key].size()-1;
            int resPos = -1;

            while(low<=high){                       //binary search
                int mid = low + (high-low)/2;
                int ts = mp[key][mid].first;        // timestamp of mid position

                if(ts>timestamp) high = mid-1;        // midVal > targetVal
                else resPos = mid, low = mid+1;        // midVal <= targetVal
            }

            return resPos == -1 ? "" : mp[key][resPos].second;
        }
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */