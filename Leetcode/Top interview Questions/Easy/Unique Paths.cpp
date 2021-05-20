class Solution {
public:
    int uniquePaths(int m, int n) {
        vector < vector < int > > Matrix (m, vector < int > (n,0));
        
        for(int i = 0; i < m ; i++){
            Matrix[i][0] = 1;
        }
        
        for(int i = 0; i < n ; i++){
        Matrix[0][i] = 1;
        }
        
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                
                Matrix[i][j] = Matrix[i-1][j] + Matrix[i][j-1];
            }
        }
        
        return Matrix[m-1][n-1];
        
    }
};
