/*
1. Find position of starting point.
2. Do a Breadth First Search until point B is reached.
3. Make a seperate matrix for recording parent coordinate of present node. This will help in reconstructing the path.
4. If B is found, reconstruct the path.
5. Code is long but is quite easy and readable.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string path;
void solve(){
    int n,m;
    bool ans = false;
    cin >> n >> m;
    pair<int,int> A_pos = {0,0};
    vector <vector <char> > mat(n, vector <char> (m,'0'));
    for(int i = 0; i  < n; i++){
        for(int j = 0; j < m; j++){
            char e;
            cin >> e;
            if(e == 'A'){
                A_pos.first = i;
                A_pos.second = j;
            }
            mat[i][j] = e;
        }
    }

    vector <vector <pair<int,int> >  > path(n,vector<pair<int,int> >(m,{-1,-1}));
    vector <pair <int,int> > directions = {{-1,0},{1,0},{0,-1},{0,1}};
    queue <pair <int,int> > q;
    q.push(A_pos);
    pair <int,int> B_pos = {0,0};
    while(!q.empty()){
        pair <int,int> node = q.front();
        q.pop();

        if(mat[node.first][node.second] == '.' || mat[node.first][node.second] == 'A' ){
            for(int i = 0; i < 4; i++){
                int row = node.first + directions[i].first;
                int col = node.second + directions[i].second;

                if(row > -1 && col > -1 && row < n && col < m && mat[row][col] == 'B'){
                    B_pos.first = row;
                    B_pos.second = col;
                    path[row][col].first = node.first;
                    path[row][col].second = node.second;
                    ans = true;
                    break;
                }
                if(row > -1 && col > -1 && row < n && col < m && mat[row][col] == '.'){
                    q.push({row,col});
                    path[row][col].first = node.first;
                    path[row][col].second = node.second;
                }
            }
            if(ans) break;
            mat[node.first][node.second] = '0';
        }

    }
    if(ans){
        cout << "YES" << endl;
        pair <int,int> previous = B_pos;
        pair <int,int> current = path[B_pos.first][B_pos.second];
        string route;
        while(current.first != -1){
            int d1 = previous.first - current.first;
            int d2 = previous.second - current.second;

            if(d1 == -1 && d2 == 0){
                route += 'U';
            }
            else if(d1 == 0 && d2 == 1){
                route += 'R';
            }
            else if(d1 == 1 && d2 == 0){
                route += 'D';
            }
            else if(d1 == 0 && d2 == -1){
                route += 'L';
            }
            previous = current;
            current = path[previous.first][previous.second];
        }
        reverse(route.begin(),route.end());
        cout << route.size() << endl;
        cout << route;
    }
    else{
        cout << "NO";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

}
