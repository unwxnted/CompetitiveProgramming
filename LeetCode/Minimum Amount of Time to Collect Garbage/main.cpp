int garbageCollection(vector<string>& g, vector<int>& t) {
        int tn = 0;
        int n = g.size();
        int k = 0;
        bool mm = false;
        bool gg = false;
        bool pp = false;
        vector<int> pf(n);
        pf[0]=0;
        for(int i = 0; i < t.size(); ++i){
            pf[i+1]+=pf[i]+t[i];
        }
        
        for(int i = n-1; i >= 0; --i){
            tn+=g[i].size();
            if(!gg && g[i].find("G") != string::npos) {tn+=pf[i]; gg=true;}
            if(!mm && g[i].find("M") != string::npos) {tn+=pf[i]; mm=true;}
            if(!pp && g[i].find("P") != string::npos) {tn+=pf[i]; pp=true;}
        }

        return tn;
    }