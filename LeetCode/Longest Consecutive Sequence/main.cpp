int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 1;
        int s = 1;
        int n = nums.size();
        if(n == 0) return 0;
        for(int i = 1; i < n; ++i){
            if(nums[i]-1 == nums[i-1]){
                s++;
            }else if(nums[i] == nums[i-1]){
                continue;
            }else if(nums[i]-1 != nums[i-1] && nums[i] != nums[i-1]){
                s=1;
            }

            if(s > l) l=s;
        }
        return l;
}