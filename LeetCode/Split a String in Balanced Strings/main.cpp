int balancedStringSplit(string s) {
        int c = 0;
        int k = 0;
        int n = s.size();
        for(int i = 0; i < n; ++i){
            if(s[i] == 'R') c++;
            if(s[i] == 'L') c--;
            if(c == 0) k++;
        }
        return k;
    }