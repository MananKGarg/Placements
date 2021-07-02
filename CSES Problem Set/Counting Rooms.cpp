/*
This is same as the number of islands problem on Leetcode. Just apply a Depth first search for area of a room. If it is > 0, increase the count. Don't forget to mark
visited cells. Beauty of this problem is in it's implementation. Go through the code and it will be clear.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll area(ll i, ll j, vector < vector <char> > &mat, ll n, ll m) {
    if (i > -1 && j > -1 && i < n && j < m && mat[i][j] == '.') {
        mat[i][j] = '#';
        return 1 + area(i - 1, j, mat, n, m) + area(i + 1, j, mat, n, m) + area(i, j + 1, mat, n, m) +
               area(i, j - 1, mat, n, m);
    }
    return 0;
}
 
void solve(){
    ll n,m;
    cin >> n >> m;
    vector < vector <char> > mat(n, vector <char> (m,'0'));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            char e;
            cin >> e;
            mat[i][j] = e;
        }
    }
    ll count = 0;
    for(ll i = 0; i < n; i++){
        for(ll j=0; j<m; j++){
            if(area(i,j,mat,n,m)) count++;
        }
    }
    cout << count;
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
