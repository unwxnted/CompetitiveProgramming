int minEatingSpeed(vector<int>& v, int h) {
        long long l = 1;
        long long r = *max_element(v.begin(), v.end());
        long long m;
        long long time;
        while(l<=r){
            m=l+(r-l)/2;
            time = 0;
            for (long long i : v) {
                time += (i + m - 1) / m;
            }

            if(time > h) l=m+1;
            else r=m-1;
        }
        return l;
    } 