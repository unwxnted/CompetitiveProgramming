int longestContinuousSubstring(string s) {
        
        string abc = "abcdefghijklmnopqrstuvwxyz";
        int p = 0;
        int c = 1;
        int k = 1;
        int n = abc.size();
        map<char, int> m;
        for(int i = 0; i < n; ++i){
            m[abc[i]] = i;
        }
        
        n = s.size();

        for(int i = 1; i < n; ++i){
            if(m[s[i]]-1 == m[s[i-1]]) k++;
            else k=1;
            c = max(c, k);
        }

        return c;
}