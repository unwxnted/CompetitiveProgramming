bool checkPalindrome(string s){
        int n = s.size();
        for(int i = 0; i < n/2; ++i){
            if(s[i] != s[n-1-i]) return false;
        }
        return true;
    }

    string firstPalindrome(vector<string>& v) {
        int n = v.size();
        for(int i = 0; i < n; ++i){
            if(checkPalindrome(v[i])) return v[i];
        }
        return "";
    }