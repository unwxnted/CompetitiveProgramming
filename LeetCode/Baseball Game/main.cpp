int calPoints(vector<string>& p) {
        stack<int> s;
        int c = 0;
        int x, z;
        for(int i = 0; i < p.size(); ++i){
            if(p[i]!="C" && p[i]!="D" && p[i]!="+"){
                s.push(stoi(p[i]));
            }else if(p[i] == "C" && !s.empty()){
                s.pop();
            }else if(p[i] == "D" && !s.empty()){
                x=s.top();
                s.push((x*2));
            }else if(p[i] == "+"  && s.size() > 1){
                x=s.top();
                s.pop();
                z=s.top();
                s.push(x);
                s.push(x+z);
            }
        }
        while (!s.empty()) {
            c += s.top();
            s.pop();
        }
        return c;
     }