#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll low = min(a,b);
        ll high = max(a,b);
        if((2*low - high) >= 0 && (2*low - high) % 3 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
