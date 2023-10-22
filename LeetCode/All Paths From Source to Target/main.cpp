void dfs(vector<vector<int>>& ady, vector<vector<int>>& paths, vector<int>& path,int s, int d){
        path.push_back(s);
        if(s==d){
            paths.push_back(path);
        }else{
            for(int i = 0; i < ady[s].size(); ++i){
                dfs(ady, paths, path, ady[s][i], d);
            }
        }
        path.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& ady) {
        int s = 0;
        int d = ady.size()-1;
        vector<vector<int>> paths;
        vector<int> path;
        dfs(ady, paths, path, s, d);
        return paths;
    }