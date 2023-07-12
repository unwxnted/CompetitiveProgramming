int numJewelsInStones(string j, string s) {
        int n = j.size();
        map<char, int> m;
        for(int i = 0; i < n; ++i){
            m[j[i]]++;
        }
        int k = s.size();
        int c = 0;
        for(int i = 0; i < k; ++i){
            if(m.find(s[i]) != m.end()){
                c++;
            }
        }

        return c;
    }