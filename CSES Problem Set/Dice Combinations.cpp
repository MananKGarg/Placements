/*
This is a DP problem. For any n, the last dice could be either number from 1 to 6. For n > 6, dp[n] is dp[i-1] + dp[i-2] ....dp[i-6]. Note that this expression 
automatically counts expressions like (1+1+2) and (1+2+1) as distinct. We just need to initialise the dp array for first 6 elements and then bottom up DP.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin >> n;
    if(n < 7) {
        ll ans = (ll)(pow(2,n-1) + 0.5);
        cout << ans;
    }
    else {
        ll mod = 1e9+7;
        vector<ll> dp(n, 0);
        for(ll i = 0; i < 6; i++){
            dp[i] = (ll)(pow(2,i) + 0.5);
        }
        for(ll i = 6; i < n; i++){
            dp[i] = ((dp[i-1] % mod) + (dp[i-2] % mod) +(dp[i-3] % mod) +(dp[i-4] % mod) +(dp[i-5] % mod) +(dp[i-6] % mod)) % mod;
        }
        cout << dp[n-1];
    }
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
