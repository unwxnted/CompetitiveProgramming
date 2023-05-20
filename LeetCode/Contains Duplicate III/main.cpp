bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<int> window;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(i > indexDiff) window.erase(nums[i - indexDiff - 1]);
        
            auto it = window.lower_bound(nums[i] - valueDiff);
            if(it != window.end() && abs(nums[i] - *it) <= valueDiff) return true;
            window.insert(nums[i]);
    }
    return false;
}