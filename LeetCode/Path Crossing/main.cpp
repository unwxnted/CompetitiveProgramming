bool isPathCrossing(string s) {
        map<pair<int,int>, int> m;
        int x = 0;
        int y = 0;
        int n = s.size();
        m[{x, y}]++;
        for(int i = 0; i < n; ++i){
            if(s[i] == 'N') y+=1;
            if(s[i] == 'S') y-=1;
            if(s[i] == 'E') x+=1;
            if(s[i] == 'W') x-=1;
            m[{x, y}]++;
            if(m[{x, y}] > 1) return true;
        }
        return false;
    }