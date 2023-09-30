double findMaxAverage(vector<int>& v, int k) {
        int n = v.size();
        int start = 0;
        double p = 0;
        double mp = INT_MIN;
        if(n==1) return static_cast<double>(v[0]);
        for(int end = 0; end < n; ++end){
            if(end-start == k-1){
                p+=v[end];
                mp=max(mp, p / k);
                p-=v[start];
                start++;
            }else{
                p+=v[end];
            }
        }
        return mp;

    }