vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int l;
        int r;
        int p = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        if(binary_search(arr.begin(), arr.end(), x)){
           l = p;
           r = p+1;
        }else{
            l = p-1;
            r = p;
        }
        vector<int> v;
        for (int i = 0; i < k; ++i) {
            if (l >= 0 && r < n) {
                if (abs(arr[l] - x) <= abs(arr[r] - x)) {
                    v.push_back(arr[l]);
                    l--;
                }else {
                    v.push_back(arr[r]);
                    r++;
                }
            }else if (l >= 0 && r>=n) {
                v.push_back(arr[l]);
                l--;
            }else if (r < n && l<0) {
                v.push_back(arr[r]);
                r++;
            }
        }
        sort(v.begin(), v.end());
        return v;
}