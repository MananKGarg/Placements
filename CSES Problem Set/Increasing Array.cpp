#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    ll n;
    cin >> n;
    vector <ll> v;
    for(ll i = 0; i<n ;i++){
        ll entry;
        cin >> entry;
        v.push_back(entry);
    }
    ll count = 0;
    for(ll i = 1;i< n;i++){
        if(v[i] < v[i-1]){
            count += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
 
    cout << count;
 
    }
