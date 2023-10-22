int shipWithinDays(vector<int>& v, int d) {
        int n = v.size();
        int r = accumulate(v.begin(), v.end(), 0);
        int l = *max_element(v.begin(), v.end());
        int m;
        int dd;
        int c;
        while(l<r){
            m=l+(r-l)/2;
            c = 0;
            dd = 1;
            for(int i = 0; i < v.size(); ++i){
                if(c + v[i]  > m){
                    c=0;
                    dd++;
                }
                c+=v[i];
            }
            if(dd <= d) r = m;
            else l = m+1;
        }
        return l;
    }