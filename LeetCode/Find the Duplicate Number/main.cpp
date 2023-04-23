int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        for(auto i : nums){
            m[i]++;
        }
        for(auto i : m){
            if(i.second >= 2) return i.first;
        }
        return -1;
    }