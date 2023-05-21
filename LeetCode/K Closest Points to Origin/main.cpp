vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<vector<int>> d;
        vector<pair<double, vector<int>>> m;
        double l;

        for(int i = 0; i < n; ++i){
            l = sqrt((pow((0-points[i][0]), 2) + (pow((0-points[i][1]), 2))));
            m.push_back({l, {points[i][0], points[i][1]}});
        }

        sort(m.begin(), m.end());

        for(int i = 0; i < k; ++i){
            d.push_back(m[i].second);
        }

        return d;
}