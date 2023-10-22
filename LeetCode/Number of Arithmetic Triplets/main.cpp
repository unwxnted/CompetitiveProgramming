int arithmeticTriplets(vector<int>& v, int d) {
        int n = v.size();
        int c = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                for(int k = 0; k < n; ++k){
                    if(i < j && j < k && v[j]-v[i] == d && v[k] - v[j] == d) c++;
                }
            }
        }
        return c;
    }