bool isAcronym(vector<string>& w, string s) {
        if(s.size() != w.size()) return false;
        
        for(int i = 0; i < s.size(); ++i){
            if(s[i]!=w[i][0]) return false;
        }
        return true;
        
    }