int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string s1 = "";
        string s2 = "";
        int n = s.size();
        int k;
        int l;
        for(int i = 0; i < n; ++i){
            if(i == 0){
                k=0;
                l=1;
            }
            if (k < n) s1+=s[k];
            if (l < n) s2+=s[l];
            k+=2;
            l+=2;
        }
        long long r = stoll(s1)+stoll(s2);
        return r;
    }