vector<int> pivotArray(vector<int>& v, int pivot) {
        int n = v.size();
        vector<int> lv;
        vector<int> rv;
        vector<int> r;
        int c = 0;
        for(int i = 0; i < n; ++i){
            if(v[i]<pivot) lv.push_back(v[i]);
            else if(v[i]>pivot) rv.push_back(v[i]);
            else if(v[i] == pivot) ++c;
        }
        r=lv;
        for(int i = 0; i < c; ++i) r.push_back(pivot);
        r.insert(r.end(), rv.begin(), rv.end());
        return r;
    }