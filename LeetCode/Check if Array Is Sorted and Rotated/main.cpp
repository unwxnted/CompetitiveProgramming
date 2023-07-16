bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int next;
        for (int i = 0; i < n; ++i) {
            next = (i + 1) % n;
            if (nums[i] > nums[next]) {
                count++;
                if (count > 1) {
                    return false;
                }
            }
        }

        return true;
    }