int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(), special.end());
        
        int n = special.size();
        int k = 0;
        for(int i = 0; i < n; ++i){
            if(i == 0) k = max(k, special[i]-bottom);
            else k = max(k, special[i]-special[i-1]-1);
        }

        return max(k, top-special[n-1]);
}