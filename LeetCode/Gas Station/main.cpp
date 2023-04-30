int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int pos = 0;
        int g = 0;
        int t = 0;
        int n = gas.size();
        for(int i = 0; i < n; ++i){
           g+=gas[i]-cost[i];
           t+=gas[i]-cost[i];
           if(g < 0){
               pos=i+1;
               g=0;
           }
        }
        if(t<0)return -1;
        return pos;
    }