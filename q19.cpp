class RandomizedSet {
public:
    RandomizedSet() {
        return null;
    }
    vector<int> v;
    
    bool insert(int val) {
        int i = 0;
        while(i<v.size()){
            if(v[i]==val)
                return false;
            i++;
        }
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        int i = 0;
        while(i<v.size()){
            if(v[i]==val){
                v.erase(v.begin()+i);
                return true;
            }
            i++;
        }
        return false;
    }
    
    int getRandom() {
        int i =0;
        i = rand()%v.size();
        return v[i];

    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */