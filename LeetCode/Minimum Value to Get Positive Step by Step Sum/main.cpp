int minStartValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> pf(n);
        pf[0] = nums[0];
        for(int i = 1; i < n; ++i){
            pf[i] = pf[i-1] + nums[i];
        }

        int min = *min_element(pf.begin(), pf.end());
        int ans;
        if(min <0) ans=1-min;
        else ans=1;

        return ans;

    }