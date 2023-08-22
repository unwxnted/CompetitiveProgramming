int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int k = 0;
        sort(nums.rbegin(), nums.rend());
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                k = i;
                c += k;
            }
        }

        return c;
    }