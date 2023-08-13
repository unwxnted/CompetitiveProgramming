int findFinalValue(vector<int>& nums, int original) {
        map<int, int> m;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            m[nums[i]]=i;
        }
        int aux = original;
        if(m.find(aux) == m.end()) return aux;
        while(m.find(aux*2) != m.end()){
            aux=aux*2;
        }
        return aux*2;
    }