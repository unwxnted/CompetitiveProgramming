vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>pf(n);
        vector<int> v;
        pf[0] = nums[0];
        for(int i = 1; i < n; ++i){
            pf[i] = pf[i-1]+nums[i];
        }

        int k;
        int j;

        for(int i = 0; i < n; ++i){
            k = (i > 0) ? pf[i - 1] : 0;
            j = pf[n - 1] - pf[i];
            v.push_back(abs(k - j));
        }

        return v;
}