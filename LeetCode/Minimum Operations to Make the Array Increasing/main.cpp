int minOperations(vector<int>& nums) {
        int p = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(i+1 < nums.size() && nums[i+1] <= nums[i]){
                p+=(nums[i]-nums[i+1])+1;
                nums[i+1] += (nums[i]-nums[i+1])+1;
            }
        }
        return p;
    }