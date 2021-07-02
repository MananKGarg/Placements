/*
Make a set and return it's size
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ll n;
    cin >> n;
    set <ll> a;
    for(ll i = 0; i < n; i++){
        ll entry;
        cin >> entry;
        a.insert(entry);
    }
    cout << a.size();
}
