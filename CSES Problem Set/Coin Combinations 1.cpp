/*
Make a dp(x+1,0) vector for which dp[x] represents number of ways of getting a sum of x. Initialise all coin value indices in dp as 1. Note that there can be more 
then 1 ways for coin values too. For example if coins = {2,3,5} and x = 5, then there are 3 ways to make 5. We just initialise to 1. rest of the cases like (2+3) 
and (3+2) are automatically covered later. 

Now, for any lets say x = 9 and coins = {2,3,5}, we would have either have added a 2 coin or a 3 coin or a 5 coin at the end. Thus dp[9] = dp[7] + dp[6] + dp[4].
construct an iterative solution from here.

ll zero = 0 is used because max function considers standalone 0 as an int and thus, would not compare it with ll.
*/



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    ll x;
    cin >> n >> x;
    vector <ll> c;
 
    for(ll i = 0; i < n; i++){
        ll e;
        cin >> e;
        c.push_back(e);
    }
 
    vector <ll> dp(x+1,0);
    ll mod = 1e9+7;
    ll zero = 0;
  
    for(ll j = 0; j < c.size(); j++){
        if(c[j] < x+1) {
            dp[c[j]] = 1;
        }
    }
    for(ll i = 1; i < x+1; i++){
        for(ll j = 0; j < c.size(); j++){
            dp[i] = dp[i] + (dp[max(zero,(i - c[j]))] % mod);
        }
        dp[i] = dp[i] % mod;
    }
    cout << dp[x];
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
