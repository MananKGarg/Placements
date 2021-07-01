/*
Ad-hoc implementation based
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll i,j;
    cin >> i >> j;
    ll ans = 0;
    if(i == j){
        ans = (i*i) - i + 1;
        cout << ans << endl;
    }
    else if(i > j){
        if(i % 2 == 0){
            ans = (i*i) - j + 1;
            cout << ans << endl;
        }
        else{
            ans = (i-1)*(i-1) + j;
            cout << ans << endl;
        }
    }
    else{
        if(j % 2 == 0){
            ans = (j-1)*(j-1) + i;
            cout << ans << endl;
        }
        else{
            ans = j*j - i + 1;
            cout << ans << endl;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}

