int maxIceCream(vector<int>& c, int cn) {
        sort(c.begin(), c.end());
        int k = 0;
        int n = c.size();
        for(int i = 0; i < n; ++i){
            if(cn<=0)break;
            if(c[i] <= cn){
                cn-=c[i];
                k++;
            }
        }
        return k;
    }