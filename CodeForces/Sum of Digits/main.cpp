#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, long> m;
    string aux;
    int n;
    int c = 0;
    while(s.size() > 1){
        m.clear();
        for(char i : s){
            m[i]++;
        }
        n = 0;
        for(auto i : m){
            aux = "";
            aux+=i.first;
            for(long j = 0; j < i.second; ++j)
                n+=stoi(aux);
        }
        s = to_string(n);
        c++;
    }
    cout << c << endl;

    return 0;
}
