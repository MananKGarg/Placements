/*
A simple way to do it is to calculate the sum of elements specified in every query. This is not efficient if there are a lot of queries. A better method is to 
calculate the sum from arr[0] to arr[i] in another array pre[i]. The answer then would be pre[b] - pre[a-1].
*/



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n, q;
    cin >> n >> q;
    vector <ll> v;
    for(ll i= 0; i < n; i++){
        ll e;
        cin >> e;
        v.push_back(e);
    }
    vector <ll> pre(n+1,0);
    pre[0] = 0;
    pre[1] = v[0];
    for(ll i = 2; i < n+1; i++){
        pre[i] = v[i-1] + pre[i-1];
    }
 
    for(ll i = 0; i < q; i++){
        ll a,b;
        cin >> a >> b;
        ll sum = pre[b] - pre[a-1];
        cout << sum << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
