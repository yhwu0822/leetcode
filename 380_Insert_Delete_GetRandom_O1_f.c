class RandomizedSet {
public:
    vector<int> temp;

    RandomizedSet() {

    }

    bool insert(int val) {
        if ( find(temp.begin(), temp.end(), val) != temp.end()){
            return false;
        }
        temp.push_back(val);
        return true;
    }

    bool remove(int val) {
        if ( find(temp.begin(), temp.end(), val) != temp.end()){
            temp.erase(find(temp.begin(), temp.end(), val));
            return true;
        }
        return false;
    }

    int getRandom() {
        /* 指定亂數範圍 */
        int min = 0;
        int max = temp.size()-1;

        /* 產生 [min , max] 的整數亂數 */
        int x = rand() % (max - min + 1) + min;

        if (temp.size() > 0)
            return temp[x];
        return 0;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

 //75.43
 //97.19