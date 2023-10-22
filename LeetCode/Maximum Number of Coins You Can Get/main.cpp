int maxCoins(vector<int>& v) {
        sort(v.begin(), v.end());
        int l = 0;
        int r = v.size()-1;
        int c = 0;
        while(l<r){
            l++;
            r--;
            c+=v[r];
            r--;
        }
        return c;
    }