/*
Total number of ways to place two knights = ((n*n) * ((n*n) - 1)) / 2. 
Two knights can attack each other only if they are on a 2 * 3 board. Number of 2*3 boards on an n*n grid = (n-1) * (n-2). Same for 3*2. For each board, we have two 
possible ways of placing knights. Thus total placings in which knights can attack each other are 4 * (n-1) * (n-2).
*/


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
