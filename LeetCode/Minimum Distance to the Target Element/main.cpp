int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int d = INT_MAX;
        for(int i = 0; i < n; ++i){
            if(nums[i] == target && abs(i-start) < d) d= abs(i-start);
        }
        return d;
    }