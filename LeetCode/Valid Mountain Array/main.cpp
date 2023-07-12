bool validMountainArray(vector<int>& v) {
        int n = v.size();
        if(n<3)return false;
        vector<int> o = v;
        sort(o.rbegin(), o.rend());
        int max = o[0];
        int l = 0;
        int h = n-2;
        if(v[0] == max || v[n-1] == max)return false;
        while(l<h){
            if((v[l] >= v[l+1] && v[l] != max) || v[l] == v[l+1]) return false;
            if((v[h+1] >= v[h] && v[h] != max) || v[h] == v[h+1]) return false;
            if(v[l] < max) l++;
            if(v[h] < max) h--;
        }
        return true;
    }