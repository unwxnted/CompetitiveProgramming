#include <bits/stdc++.h>

using namespace std;

string intercambia(string s){

    for(int i = 0;i < s.size(); ++i){
        if(s[i] == towupper(s[i])) s[i]=towlower(s[i]);
        else if (s[i] == towlower(s[i])) s[i]=towupper(s[i]);
    }
    return s;
}

string borrarult(string s){
    string ss = "";
    for(int i = 0; i < s.size()-1;++i){
        ss+=s[i];
    }
    return ss;
}

string borrapri(string s){
    string ss = "";
    for(int i = 1; i < s.size();++i){
        ss+=s[i];
    }
    return ss;
}

string dup(string s){
s+=s;
return s;
}

string rota(string s){
    char a = s[0];
    string ss = "";
    for(int i = 1; i < s.size(); ++i){
        ss+=s[i];
    }
    ss+=a;
    return ss;
}

string invertir(string s){
    for(int i = 0; i < s.size()/2; ++i){
        swap(s[i], s[s.size()-1-i]);
    }
    return s;
}

string lower(string s){
    for(int i = 0; i < s.size(); ++i){
        s[i]=towlower(s[i]);
    }
    return s;
}

string chauagus(string s){
    string aux = "";
    string agus = "agus";
    string ss = lower(s);
    int p1=0;
    int p2=-1;
    int i = 0;
    int j = 0;
    while(i < ss.size() && j<ss.size()){

        if(ss[i] == agus[j]){
            if(p1==-1)p1=i;
            aux+=ss[i];
            ++j;
        }else {j=0; p1=-1; aux ="";}

        if(agus == aux){
            p2=i;
            break;
        }
        ++i;

    }
    string r = "";
    for(int i = 0; i < s.size(); ++i){
        if(i>=p1 && i<=p2){}
        else{
            r+=s[i];
        }
    }
    return r;
}

string agrega(string s, string a){
s+=a;
return s;
}

string dupIND(string s, int a, int b){
    string ss = "";
    string cp = "";
    for(int i = a-1; i <= b-1; ++i){
        cp+=s[i];
    }
    for(int i = 0; i < s.size(); ++i){
        if(i==b-1){
            ss+=cp;
        }else{
            ss+=s[i];
        }
    }
    return ss;

}

string invertirIND(string s, int a,int b){

    string ss = "";
    for(int i = a-1; i <=b-1; ++i){
        ss+=s[i];
    }
    string r = "";
    ss=invertir(ss);
    for(int i = 0;i < s.size(); ++i){
        if(i==a-1){
            r+=ss;
        }else if(i<a-1 || i >b-1){
            r+=s[i];
        }
    }

    return r;
}

string borraIND(string s, int a){
    string ss = "";
    for(int i = 0; i < s.size(); ++i){
        if(i!=a-1)ss+=s[i];
    }
    return ss;
}

string chauIND(string s, string sa){
    string aux = "";
    string ss = s;
    int p1=0;
    int p2=-1;
    int i = 0;
    int j = 0;
    while(i < ss.size() && j<ss.size()){

        if(ss[i] == sa[j]){
            if(p1==-1)p1=i;
            aux+=ss[i];
            ++j;
        }else {j=0; p1=-1; aux ="";}

        if(sa == aux){
            p2=i;
            break;
        }
        ++i;

    }
    string r = "";
    for(int i = 0; i < s.size(); ++i){
        if(i>=p1 && i<=p2){}
        else{
            r+=s[i];
        }
    }
    return r;
}

string procesatexto(string &s, vector<string> &v){

    for(int i = 0; i < v.size(); ++i){
        if(v[i] == "INTERCAMBIA") s=intercambia(s);
        if(v[i] == "BORRAULTI") s=borrarult(s);
        if(v[i] == "BORRAPRI") s=borrapri(s);
        if(v[i] == "DUP") s=dup(s);
        if(v[i] == "ROTA") s=rota(s);
        if(v[i] == "INVERTIR") s=invertir(s);
        if(v[i] == "CHAUAGUS") s=chauagus(s);
        if(v[i].find("AGREGA-") != string::npos){
            string aux = "";
            bool r = false;
            for(int j = 0; j < v[i].size(); ++j){
                if(r)aux+=v[i][j];
                if(v[i][j] == '-') r=true;
            }
            s=agrega(s, aux);
        }
        if(v[i].find("DUP-") != string::npos){
            string ind1 = "";
            string ind2 = "";
            bool r = false;
            int c = 0;
            for(int j = 0; j < v[i].size(); ++j){
                if(c== 1 && v[i][j] != '-'){
                    ind1+=v[i][j];
                }

                if(c==2 && v[i][j] != '-'){
                    ind2+=v[i][j];
                }
                if(!r){}
                if(r && c==1 && v[i][j] == '-')c++;
                else if(v[i][j] == '-' && !r) {
                    r=true;
                    c++;
                }
            }
            int pp1 = stoi(ind1);
            int pp2 = stoi(ind2);
            s=dupIND(s, pp1, pp2);
        }
        if(v[i].find("INVERTIR-") != string::npos){
            string ind1 = "";
            string ind2 = "";
            bool r = false;
            int c = 0;
            for(int j = 0; j < v[i].size(); ++j){
                if(c== 1 && v[i][j] != '-'){
                    ind1+=v[i][j];
                }

                if(c==2 && v[i][j] != '-'){
                    ind2+=v[i][j];
                }
                if(!r){}
                if(r && c==1 && v[i][j] == '-')c++;
                else if(v[i][j] == '-' && !r) {
                    r=true;
                    c++;
                }
            }
            int pp1 = stoi(ind1);
            int pp2 = stoi(ind2);
            s=invertirIND(s, pp1, pp2);
        }
        if(v[i].find("BORRA-") != string::npos){
            string ind1 = "";
            string ind2 = "";
            bool r = false;
            int c = 0;
            for(int j = 0; j < v[i].size(); ++j){
                if(c== 1 && v[i][j] != '-'){
                    ind1+=v[i][j];
                }

                if(c==2 && v[i][j] != '-'){
                    ind2+=v[i][j];
                }
                if(!r){}
                if(r && c==1 && v[i][j] == '-')c++;
                else if(v[i][j] == '-' && !r) {
                    r=true;
                    c++;
                }
            }

            int pp1 = stoi(ind1);
            s=borraIND(s, pp1);
        }
        if(v[i].find("CHAU-") != string::npos){
            string aux = "";
            bool r = false;
            for(int j = 0; j < v[i].size(); ++j){
                if(r)aux+=v[i][j];
                if(v[i][j] == '-') r=true;
            }
            s=chauIND(s, aux);
        }

    }
    return s;

}
