vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> n;
        vector<int> p;
        int l = nums.size();
        for(int i = 0; i < l; ++i){
            if(nums[i] >= 0) p.push_back(nums[i]);
            else n.push_back(nums[i]);
        }
        vector<int> v;
        int k = p.size();
        for(int i = 0; i < k; ++i){
            v.push_back(p[i]);
            v.push_back(n[i]);
        }
        return v;
    }