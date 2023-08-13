bool areOccurrencesEqual(string s) {
        map<char, int> m;
        for(auto i : s){
            m[i]++;
        }
        int x;
        int n = 0;
        for(auto i : m){
            if(n == 0)x=i.second;
            if(n != 0 && i.second != x) return false;
            n++;
        }
        return true;

    }