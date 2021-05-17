// compare the number of elements in the vector with a set of the elements of the vector.

class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        set <int> s;
        for(int i = 0; i < v.size(); i++){
            s.insert(v[i]);
        }
        
        return !(s.size() == v.size());
        
    }
};
