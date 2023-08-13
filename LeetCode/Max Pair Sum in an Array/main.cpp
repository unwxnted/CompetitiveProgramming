int getmax(int n){
        string l = to_string(n);
        sort(l.rbegin(), l.rend());
        n = l[0]- '0';
        return n;
    }
    
    int maxSum(vector<int>& nums) {
        int maxSum=-1;
        int k;
        int l;
        for(int i = 0; i< nums.size(); ++i){
            for(int j = 0; j < nums.size(); ++j){
                if(i==j)continue;
                if(getmax(nums[i]) == getmax(nums[j])) maxSum=max(maxSum, nums[i]+nums[j]);
            }
        }
        return maxSum;
    }