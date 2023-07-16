vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        map<int, int> m;
        for(auto i : arr1){
            m[i]++;
        }
        int n = arr2.size();
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m[arr2[i]]; ++j){
                v.push_back(arr2[i]);
            }
        }

        for(int i = 0; i < n; ++i){
            m.erase(arr2[i]);
        }

        for(auto i : m){
            for(int j = 0; j < i.second; ++j) v.push_back(i.first);
        }

        return v;
    }