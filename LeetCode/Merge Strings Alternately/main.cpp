string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        int mi = word1.size()-1;
        int mj = word2.size()-1;
        string f = "";
        while(i <= mi || j <= mj){
            if(i <= mi) f+=word1[i];
            if(j <= mj) f+=word2[j];
            i++;
            j++;
        }
        return f;
    }