#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int escalera(vector<ll> v, ll H){
    int c = 0;
    ll a = 0;
    int i = 0;

    while(a<H){
        a+=v[i];
        i++;
        c++;
        if(i==v.size()) i=0;
    }
    return c;
}

int main()
{
    int n;
    int H;
    cin >> n >>H;
    vector<ll> v(n);
    for(int i = 0;i<n;++i) cin >> v[i];
    cout << escalera(v,H) << endl;
    return 0;
}
