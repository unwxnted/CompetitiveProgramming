int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int window_sum = 0;
        int target_sum = k * threshold;

        for (int i = 0; i < k; i++) {
            window_sum += arr[i];
        }

        if (window_sum >= target_sum) {
            count++;
        }

        for (int i = k; i < arr.size(); i++) {
            window_sum += arr[i] - arr[i - k];
            if (window_sum >= target_sum) {
                count++;
            }
        }
        return count;
    }