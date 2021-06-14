#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << 1;
    }
    else if(n < 4){
        cout << "NO SOLUTION";
    }
    else if (n==4){
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
    }
    else{
        vector <int> v(n,0);
        int i = 0;
        int a = 1;
        while(i < n){
            v[i] = a;
            a++;
            i = i +2;
        }
        i = 1;
        a = n/2 + (n%2 != 0) + 1;
        while(i < n){
            v[i] = a;
            a++;
            i = i+2;
        }
        for(int j = 0; j < n; j++){
            cout << v[j] << " ";
        }
    }
 
 
    }
