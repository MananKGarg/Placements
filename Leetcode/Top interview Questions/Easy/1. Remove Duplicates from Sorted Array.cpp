#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {1,2,3};

    // base case empty vector
    if(v.empty()) return
    
    // Initialising two indices, a will remain till unique elements, b will explore  
    int a = 0, b = 1;

    for(b = 1; b < v.size(); b++){
        if(v[b] != v[b-1]){           // a increases when the next element b finds is different from the previous one and then replaces the repeated element 
            a++;                      // at a with the element at b
            v[a] = v[b];
        }

    return a + 1;
    }

}
