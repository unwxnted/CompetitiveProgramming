double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>l;
        for(auto i : nums1){
            l.push_back(i);
        }

        for(auto i : nums2){
            l.push_back(i);
        }

        sort(l.begin(), l.end());
        int k = l.size();
        if(k%2 != 0) return l[k/2];
        
        double h = (l[k/2-1]+l[k/2])/2.0;
        return h;
    }