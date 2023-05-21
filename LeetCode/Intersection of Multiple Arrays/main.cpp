vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> v;
        map<int, int> m;
        int n = nums.size();
        int k = nums[0].size();
        
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < nums[i].size(); ++j){
                m[nums[i][j]]++;
            }
        }
        
        for(auto i : m){
            if(i.second == n) v.push_back(i.first);
        }
        return v;
}