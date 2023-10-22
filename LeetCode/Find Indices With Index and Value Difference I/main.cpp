vector<int> findIndices(vector<int>& v, int id, int vd) {
        vector<int> r;
        for(int i = 0; i < v.size(); ++i){
            for(int j = 0; j < v.size(); ++j){
                if(abs(i-j) >= id && abs(v[i]- v[j]) >= vd){
                    r.push_back(i);
                    r.push_back(j);
                    return r;
                }
            }
        }
        r.push_back(-1);
        r.push_back(-1);
        return r;
    }