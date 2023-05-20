string reverse(string w){
        string j = "";
        int n = w.size();
        for(int i = n-1; i >= 0; --i){
            j+=w[i];
        }
        
        return j;
    }

    string reversePrefix(string word, char ch) {
        int n = word.size();
        string w = "";
        bool k=false;
        for(int i = 0; i < n; ++i){
            w+=word[i];
            if(word[i] == ch && !k) {
                w = reverse(w);
                k=!k;
            }
        }

        return w;
}