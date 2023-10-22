int search(vector<int>& v, int target) {
        map<int,int> m;
        for(int i = 0; i < v.size(); ++i){
            m[v[i]] = i;
        }
        if(m.find(target) != m.end()) return m[target];
        else return -1;
    }