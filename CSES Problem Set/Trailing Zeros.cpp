/*
Trailing zeros = floor(n/5) + floor(n/25) + floor(n/125) + ...
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n;
    cin >> n;
    ll  ans = 0;
    while(n > 0){
        ans = ans + (n/5);
        n = n / 5;
    }
    cout << ans;
