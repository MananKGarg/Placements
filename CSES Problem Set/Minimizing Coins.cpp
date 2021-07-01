/*
Basic DP. DP array initialisation is important. Initialise all the values to INT_MAX except for dp[0]. Initialise dp[0] = 0.
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,x;
    cin >> n >> x;
    vector <ll> coins;
    for(ll i = 0; i < n; i++){
        ll e;
        cin >> e;
        coins.push_back(e);
    }
    vector <ll> dp(x+1,INT_MAX);
    ll zero = 0;
    dp[0] = zero;
    for(ll i = 1; i < x+1; i++){
        for(ll j = 0; j < coins.size(); j++){
            if(i >= coins[j]){
                dp[i] = min(dp[i],1 + dp[i - coins[j]]);
            }
        }
    }
 
    if(dp[x] == INT_MAX) {
        cout << -1;
    }
    else{
        cout << dp[x];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
