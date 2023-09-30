int minPartitions(string s) {
        int n = s.size();
        int aux;
        int c = -1;
        for(int i = 0; i < n; ++i){
            aux= s[i] - '0';
            c=max(aux, c);
        }
        return c;
    }