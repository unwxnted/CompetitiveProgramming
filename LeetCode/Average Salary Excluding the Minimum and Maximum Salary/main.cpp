double average(vector<int>& v) {
        sort(v.begin(), v.end());
        int n = v.size();
        double k = 0;
        for(int i = 1; i < n-1; ++i){
            k+=v[i];
        }
        return k/(n-2);
    }