vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        deque<int> d;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(nums[i] % 2 == 0) d.push_front(nums[i]);
            else d.push_back(nums[i]);
        }
        vector<int> v;
        for(auto i : d){
            v.push_back(i);
        }
        return v;
}