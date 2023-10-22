void dfs(vector<vector<int>>& ady, vector<bool>& visited, int s, int d){
        visited[s] = true;
        if(s==d) return;
        for(int i = 0; i < ady[s].size(); ++i){
            if(!visited[ady[s][i]]) dfs(ady, visited, ady[s][i], d);
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> ady(n);
        vector<bool> visited(n);
        for(auto i : edges){
            ady[i[0]].push_back(i[1]);
            ady[i[1]].push_back(i[0]);
        }

        dfs(ady, visited, source, destination);

        return visited[destination];
    }