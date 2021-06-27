/*
Make an array with numbers from 1 to n. take XOR of all the elements of given and new array. Take XOR of both results.
1. num ^ 0 = num
2. num ^ num = 0

example - n = 4, arr = {1,2,3}
make an array b = {1,2,3,4}
take XOR of all elements in arr and b.

ans = 1^2^3^1^2^3^4 = 4
*/

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
