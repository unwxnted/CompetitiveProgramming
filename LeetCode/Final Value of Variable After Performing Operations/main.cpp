int finalValueAfterOperations(vector<string>& v) {
        int n = v.size();
        int k;
        int x = 0;
        bool s;
        for(int i = 0; i < n; ++i){
            k = v[i].size();
            s=false;
            for(int j = 0; j < k; ++j){
                if(v[i][j] == '-'){
                    s=false;
                    break;
                }
                
                if (v[i][j] == '+'){
                    s=true;
                    break;
                }
            }
            if(s) x++;
            if(!s) x--;
        }
        return x;
    }