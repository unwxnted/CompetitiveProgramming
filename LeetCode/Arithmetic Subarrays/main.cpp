bool check(vector<int> nums, int i, int j){
        vector<int> aux(nums.begin() + i, nums.begin() + j + 1);
        bool k = true;
        bool p = true;
        sort(aux.begin(), aux.end());
        for(int i = 1; i < aux.size(); ++i){
            if(aux[i]-aux[i-1] != aux[1]-aux[0]){
                k=false;
                break;
            }
        }

        sort(aux.rbegin(), aux.rend());
        for(int i = 1; i < aux.size(); ++i){
            if(aux[i]-aux[i-1] != aux[1]-aux[0]){
                p=false;
                break;
            }
        }

        if(k || p) return true;
        return false;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> v;
        int n = l.size();
        for(int i = 0; i < n;++i){
            v.push_back(check(nums, l[i], r[i]));
        }
        return v;
    }