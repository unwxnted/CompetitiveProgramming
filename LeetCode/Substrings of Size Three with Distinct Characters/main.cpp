int countGoodSubstrings(string s) {
        int n = s.size();
        int i = 0;
        int j = 2;
        int p = 0;
        while(j < n){
            if(s[i] != s[j] && s[i] != s[i+1] && s[i+1] != s[j]) ++p;
            ++i;
            ++j;
        }
        return p;
    }