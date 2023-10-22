vector<int> pancakeSort(vector<int>& arr) {
        vector<int> result;
        int n = arr.size();
        for (int target = n; target > 1; target--) {
            int i;
            for (i = 0; arr[i] != target; i++);
            if (i != target - 1) {
                reverse(arr.begin(), arr.begin() + i + 1);
                result.push_back(i + 1);
                reverse(arr.begin(), arr.begin() + target);
                result.push_back(target);
            }
        }
        return result;
    }