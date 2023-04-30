int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pf(n);
        pf[0] = nums[0];
        for(int i = 1; i < n; ++i) pf[i]=pf[i-1]+nums[i];
        for(int i = 0; i < n; ++i){
            if(i == 0 && ((pf[n-1]-pf[0]) == 0)) return 0;
            if(i!=0 && (pf[i]) == (pf[n-1]-pf[i-1])) return i;
        }
        return -1;
    }