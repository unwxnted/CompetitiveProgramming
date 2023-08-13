int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int m = INT_MAX;
        for(int i : nums){
            if(abs(m) >= abs(i)) m=i;
        }
        return m;
}