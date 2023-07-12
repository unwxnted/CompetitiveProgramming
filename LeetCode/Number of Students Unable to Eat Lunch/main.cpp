int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int k = sandwiches.size();
        int nk = n+k;

        deque<int> d;
        deque<int> s;
        for(int i = 0; i < n; ++i){
            d.push_back(students[i]);
        }

        for(int i = 0; i < k; ++i){
            s.push_back(sandwiches[i]);
        }

        int c = 0;

        while(d.size()>0){
            if(d.front() == s.front()){
                d.pop_front();
                s.pop_front();
            }else{
                d.push_back(d.front());
                d.pop_front();
                
            }
            if(c == nk*2)break;
            c++;
        }

        return d.size();

    }