int maximumCount(vector<int>& nums) {
        int c = 0;
        int zeros = 0;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(nums[i]>0){

            }else if(nums[i]<0){
                c++;
            }else{
                zeros++;
            }
        }
        return max(c, n-c-zeros);
    }