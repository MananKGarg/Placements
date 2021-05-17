// Bitwise XOR on every element of list. Bitwise XOR is associative and commutative.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            res = res ^ nums[i];
        }
        
        return res;
    }
};
