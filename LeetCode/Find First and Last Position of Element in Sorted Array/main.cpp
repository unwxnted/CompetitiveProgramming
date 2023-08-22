vector<int> searchRange(vector<int>& nums, int target) {
        int r = nums.size()-1;
        int l = 0;
        int m;
        vector<int> v(2);
        int k = -1;
        while(l<=r){
            m = l+(r-l)/2;
            if(nums[m]==target)k=m;
            if(nums[m]<target) l=m+1;
            else r=m-1;
        }
        int j = k;
        int t = -1;
        while(k<nums.size() && k >= 0){
            if(nums[k]==target){
                t=k;
                k++;
            }else break;
        }
        v[0]=j;v[1]=t;
        return v;
    }