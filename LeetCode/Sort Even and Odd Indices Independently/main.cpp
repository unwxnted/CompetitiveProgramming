vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> p;
        vector<int> np;
        int n = nums.size();

        for(int i = 0; i < n; ++i){
            if(i%2==0) p.push_back(nums[i]);
            else np.push_back(nums[i]);
        }

        sort(p.begin(), p.end());
        sort(np.begin(), np.end(), greater<int>());

        vector<int> v;
        int k = 0;
        int l = 0;
        for(int i = 0; i < n; ++i){
            if(i % 2== 0){
                v.push_back(p[k]);
                k++;
            }else{
                v.push_back(np[l]);
                l++;
            }
        }

        return v;
    }