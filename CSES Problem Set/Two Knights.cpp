#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll solve(ll n){
    ll ans = ((n*n)*((n*n) - 1))/2 - 4*(n-1)*(n-2);
    return ans;
}
 
int main(){
    ll n;
    cin >> n;
    for(ll i = 1; i < n+1;i++){
        cout << solve(i) <<"\n";
    }
 }
