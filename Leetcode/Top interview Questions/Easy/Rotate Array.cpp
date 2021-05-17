#include <bits/stdc++.h>

using namespace std;

// Reverse first n-k elements, reverse last k elements, then reverse the entire array

int main() {
    vector <int> v = {1,2,3,4,5,6,7};

    int k = 8;
    k = k % v.size();
    cout << k;

    reverse(v.begin(), v.begin() + v.size() - k);
    reverse(v.begin() + v.size() - k, v.end());
    reverse(v.begin(),v.end());
    }



