int numIdenticalPairs(vector<int>& nums) {
        map<int, int>m;
        int pairs = 0;
        for(auto i : nums){
            m[i]++;
        }

        for(auto i : m){
            if(i.second > 1){
                pairs = pairs + ((i.second * (i.second-1))/2);
            }
        }
    
        return pairs;
}