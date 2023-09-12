int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int m = -1;
        int i = 0;
        int n = nums.size()-1;
        while(i<n){
            m=max(m, nums[i]+nums[n]);
            i++;
            n--;
        }
        return m;
    }