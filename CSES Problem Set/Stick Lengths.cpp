/* 
 We want to find x such that for p1,p2,p3....pn in array P, |p1-x| + |p2-x| + |p3-x|....|pn-x| is minimum. The point which satisfies this property is the median of 
 sorted array P. For odd n, there is only one median, for even n, any one of the median works. Proof lies in graph of |p1-x| + |p2-x| + |p3-x|....|pn-x|. Refer this
 link for explaination of proof. https://stackoverflow.com/questions/14661939/choose-a-point-which-minimizes-the-sum-of-distances-between-it-and-other-points 
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin >> n;
    vector <ll> p;
    for(ll i = 0; i < n; i++){
        ll e;
        cin >> e;
        p.push_back(e);
    }
    sort(p.begin(),p.end());
    ll med = p[n/2];
    ll cost = 0;
    for(ll i = 0; i < n; i++){
        cost += abs(p[i] - med);
    }
    cout << cost;
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
