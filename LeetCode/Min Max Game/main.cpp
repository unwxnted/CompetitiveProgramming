int minMaxGame(vector<int>& nums) {
        bool minmax;
        while(nums.size() > 1){
            minmax=true;
            vector<int> newNums;
            for(int i = 0; i < nums.size(); i+=2){
                if(minmax) newNums.push_back(min(nums[i], nums[i+1]));
                else newNums.push_back(max(nums[i], nums[i+1]));
                minmax=!minmax;
            }
            nums=newNums;
        }
        return nums[0];
    }