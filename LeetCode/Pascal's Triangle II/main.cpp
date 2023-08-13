vector<int> getRow(int rowIndex) {
        int row=0;
        vector<int> v;
        vector<int> aux;
        aux.push_back(1);
        int n;
        while(row<rowIndex){
            n=aux.size();
            v.clear();
            v.push_back(1);
            for(int i = 0; i < n-1; ++i){
                v.push_back(aux[i] + aux[i+1]);
            }
            v.push_back(1);
            aux=v;
            row++;
        }
        return aux;
    }