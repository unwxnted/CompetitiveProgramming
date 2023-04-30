int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> pf(n);
        pf[0] = arr[0];
        for(int i = 1; i < n; ++i){
            pf[i] = pf[i-1]+arr[i];
        }
        int sum = 0;
        for(int i = 0; i < n; ++i){
            for(int j = i; j < n; ++j){
                int len = j - i + 1;
                if(len % 2 != 0){
                    sum += pf[j] - (i > 0 ? pf[i-1] : 0);
                }
            }
        }
        return sum;
    }