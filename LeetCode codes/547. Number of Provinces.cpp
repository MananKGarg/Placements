class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector <bool> visited(n,false);
        int counter = 0;
        queue <int> q;
        
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;                
                counter++;
            }
            while(!q.empty()){
                int ele = q.front();
                q.pop();
                for(int j = 0; j < n; j++){
                    if(ele != j && isConnected[ele][j] == 1 && visited[j] == false){
                        q.push(j);
                        visited[j] = true;
                    }
                }
            }
        }
        return counter;
    }
};
