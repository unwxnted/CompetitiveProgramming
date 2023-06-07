#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    string s;
    for(int i = 0; i < 3; ++i){
        cin >> s;
        if(s[1] == '<'){
            if(s[0] == 'A') a--;
            if(s[0] == 'B') b--;
            if(s[0] == 'C') c--;
            if(s[2] == 'A') a++;
            if(s[2] == 'B') b++;
            if(s[2] == 'C') c++;
        }

        if(s[1] == '>'){
            if(s[2] == 'A') a--;
            if(s[2] == 'B') b--;
            if(s[2] == 'C') c--;
            if(s[0] == 'A') a++;
            if(s[0] == 'B') b++;
            if(s[0] == 'C') c++;
        }
    }

    map<int, char> m;
    m.insert({a, 'A'});
    m.insert({b, 'B'});
    m.insert({c, 'C'});

    if(a == b || a == c || b == c)
    {
        cout << "Impossible" << endl;
        return 0;
    }

    for(auto i: m){
        cout << i.second;
    }
    cout << endl;

    return 0;
}
