#include <bits/stdc++.h>

using namespace std;

int dfs(vector<vector<int>>& grid, int i, int k, vector<vector<bool>>& visited, int area){

    if (visited[i][k]) return area;

    visited[i][k] = true;

    if (grid[i][k] == 0) return area;

    area++;

    if(i >= 1)
        area = dfs(grid, i-1 , k, visited, area);
    if(k >= 1)
        area = dfs(grid, i, k-1 , visited, area);
    if(i+1 < grid.size())
        area = dfs(grid, i+1, k, visited, area);
    if(k+1 < grid[0].size())
        area = dfs(grid, i, k+1, visited, area);

    return area;
}

int maxAreaOfIsland(vector<vector<int>>& grid) {

    vector <int> v;
    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
    for(int i = 0; i < grid.size(); ++i){
        for(int k = 0; k < grid[0].size(); ++k){
            int area = 0;
            area = dfs(grid, i, k, visited,area);
            v.push_back(area);
        }
    }

    sort(v.rbegin(), v.rend());
    return v[0];

}
