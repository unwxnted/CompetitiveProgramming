int triangularSum(vector<int>& nums) {
        
        if(nums.size() == 1)return nums[0];

        vector<int> news = nums;

        while(nums.size() > 1){
            news.clear();
            for (int i = 0; i < nums.size() - 1; ++i) {
                news.push_back((nums[i] + nums[i + 1]) % 10);
            }
            nums=news;
        }

        return nums[0];

    }