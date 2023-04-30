bool uniqueOccurrences(vector<int>& arr) {
        map<int ,int> m;
        vector<int> v;
        for(auto i : arr) m[i]++;
        for(auto i : m){
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        for(int i = 1; i < v.size(); ++i){
            if(v[i] == v[i-1]) return false;
        }
        return true;
    }