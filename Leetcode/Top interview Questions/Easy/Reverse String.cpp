// Here, reverse method is directly used. Interview method is to swap 1st and last element, then 2nd and 2nd last element and so on

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};
