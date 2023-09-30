int maximumWealth(vector<vector<int>>& a) {
        int m = -1;
        int c;
        for(auto &i : a){
            c= 0;
            for(auto &j : i){
                c+=j;
            }
            m=max(m, c);
        }
        return m;
    }