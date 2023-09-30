int scoreOfParentheses(string s) {
        int p = 0;
        int d = 0;
        char a;
        for(auto &i:s){
            if(i=='(') d++;
            else{
                d--;
                if(a=='(') p+=pow(2, d);
            }
            a=i;
        }
        
        return p;
    }