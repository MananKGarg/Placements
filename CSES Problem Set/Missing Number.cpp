#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    long long a = 0;
    for(long long i= 0; i < n-1; i++){
        long long entry;
        cin >> entry;
        a = a^entry;
    }
    long long b=0;
    for(long long i=1; i<n+1;i++ ){
        b= b^i;
    }
    cout << (a^b);
}
