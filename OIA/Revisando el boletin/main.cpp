#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    double sum = 0;
    double prom;
    double m = -1;
    double ult;

    for(int i = 0; i < n; ++i){
        sum+=v[i];
        m=max(m, v[i]);
        if(i==n-1) ult=v[i];
    }
    prom=floor(sum/n);

    cout << sum << endl;
    cout << prom << endl;
    if(prom >= 7 && ult >= 7) cout << "SI" << endl; else cout << "NO" << endl;
    cout << m << endl;

    return 0;
}
