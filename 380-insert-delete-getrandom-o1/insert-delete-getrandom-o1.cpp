class RandomizedSet {
public:
    vector<int>tr;
    RandomizedSet() {
       
    }
    
    bool insert(int val) {
        if(find(tr.begin(),tr.end(),val)!=tr.end())return false;
        else {
            tr.push_back(val);
            return true;
        }
    }
    
    bool remove(int val) {
        auto x=find(tr.begin(),tr.end(),val);
        if(x!=tr.end()){
            tr.erase(x);
            return true;
        }
        else return false;
    }
    
    int getRandom() {
        int x=rand() % tr.size();
        return tr[x];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */