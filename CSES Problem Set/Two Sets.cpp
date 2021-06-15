#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n;
    cin >> n;
 
    if(n%4 != 0 && (n+1)%4 != 0){
        cout << "NO";
    }
    else{
        cout << "YES\n";
        set <ll> a,b;
        for(ll i = 1; i<n+1; i++){
            a.insert(i);
        }
        ll half = (n*(n+1))/4;
        for(ll i = n ; i > 0; i--){
            if(i <= half){
                half = half - i;
                a.erase(i);
                b.insert(i);
            }
        }
        cout << a.size() << "\n";
        for(ll x: a){
            cout << x << " ";
        }
        cout << "\n" << b.size() << "\n";
        for(ll x:b){
            cout << x << " ";
        }
    }
 }
