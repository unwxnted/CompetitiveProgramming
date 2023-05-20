int countNums(vector<int> v, int mid){
        int k = 0;
        for(int i = 0; i < v.size(); ++i){
            if(v[i] >= mid ) k++;
        }
        return k;
    }

    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums[n-1];
        int mid;
        
        while(left <= right){
            mid = (right+left) / 2;
            if(countNums(nums, mid)== mid){
                return mid;
            }else if(countNums(nums, mid) > mid ) left = mid+1;
            else right= mid-1;
        }
 
        return -1;
}