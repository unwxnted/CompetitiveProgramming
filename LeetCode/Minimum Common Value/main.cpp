int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        for(int i = 0; i < n; ++i){
            if(binary_search(nums2.begin(), nums2.end(), nums1[i])) return nums1[i];
        }
        return -1;
}