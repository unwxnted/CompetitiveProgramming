vector<vector<int>> findWinners(vector<vector<int>>& mt) {
        map<int, int> m;
        vector<vector<int>> v(2);
        int n = mt.size();
        int i;
        for(i = 0; i < n; ++i){
            m[mt[i][0]];
            m[mt[i][1]]++;
        }

        for(auto k : m){
            if(k.second == 0)v[0].push_back(k.first);
            if(k.second == 1)v[1].push_back(k.first);
        }
        return v;
    }