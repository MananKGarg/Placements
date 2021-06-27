/*
Find 2^n.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n;
    cin >> n;
    ll mod = 1000000007;
    ll ans = 1;
    for(int i = 1; i < n+1; i++){
        ans = (2 * (ans % mod)) % mod;
    }
    ans = ans % mod;
    cout << ans;
 }
