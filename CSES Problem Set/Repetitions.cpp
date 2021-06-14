#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int maxi = 1;
    int count = 1;
 
    for(int i = 1; i < s.size();i++){
        if(s[i] == s[i-1]){
            count++;
            maxi = max(count, maxi);
        }
        else{
            count = 1;
        }
    }
    cout << maxi;
