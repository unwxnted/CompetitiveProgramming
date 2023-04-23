int partitionString(string s) {
        set<char>t;
        int p = 1;
        int last = 0;
        for(int i = 0; i < s.size(); ++i){
            if(i == 0 && last == 0) t.insert(s[i]);

            if(i!= 0 && last == 0){
                
                if(s[i-1] != s[i]){
                    t.insert(s[i-1]);
                    t.insert(s[i]);
                }else{
                    p++;
                    last = 0;
                    t.insert(s[i]);
                }
            }else{
                t.insert(s[i]);
            }

            if(last == t.size()){
                p++;
                last = 0;
                t.clear();
            }else{
                last = t.size();
            }
            
        }
        return p;
    }