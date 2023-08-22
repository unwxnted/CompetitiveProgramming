int countNegatives(vector<vector<int>>& grid) {
        int c = 0;
        int k;
        for(auto &i : grid){
            k=-1;
            int l = 0;
            int r = i.size()-1;
            
            while (l <= r) {
                int m = l + (r - l) / 2;
                if (i[m] < 0) {
                    k = m;
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }

            if (k != -1) {
                c += i.size() - k;
            }

        }
        return c;
    }