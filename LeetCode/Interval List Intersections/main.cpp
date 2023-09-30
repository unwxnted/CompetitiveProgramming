vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>> res;
        int p1 = 0;
        int p2 = 0;
        int l, r;
        while(p1 < a.size() && p2 < b.size()){
            l=max(a[p1][0], b[p2][0]);
            r=min(a[p1][1], b[p2][1]);
            if(l<=r) res.push_back({l, r});
            if(a[p1][1] < b[p2][1]) p1++;
            else p2++;
        }
        return res;
    }