int dominantIndex(vector<int>& nums) {
        int m = 0;
        int p;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(nums[i] > m) {
                m = nums[i];
                p = i;
            }
        }

        for(int i = 0; i < n; ++i){
            if(i == p)continue;
            if(nums[i]*2 > m) return -1;
        }
        return p;
    }