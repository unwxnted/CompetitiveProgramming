int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int maxLeft = nums[0];
        int currMax = nums[0];
        int partitionIndex = 0;
        
        for (int i = 1; i < n - 1; ++i) {
            currMax = max(currMax, nums[i]);
            
            if (nums[i] < maxLeft) {
                maxLeft = currMax;
                partitionIndex = i;
            }
        }
        
        return partitionIndex + 1;
    }