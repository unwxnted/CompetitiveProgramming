#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll aplicando(string s, ll d, int a, int b){
    string ss;
    for(int i = a-1; i < b; ++i){
        ss+=s[i];
    }
    ll n = stoll(ss);
    return n%d;
}

int main()
{
    string s;
    ll d;
    int q;
    cin >> s;
    cin >> d;
    cin >> q;
    vector<pair<int,int> > p(q);

    for(int i = 0;i<q; ++i){
        cin >> p[i].first >> p[i].second;

    }
    ll r;
    for(auto i : p){
        r=aplicando(s, d, i.first, i.second);
        cout << r << endl;
    }
    return 0;
}
