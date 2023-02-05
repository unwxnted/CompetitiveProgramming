#include <bits/stdc++.h>

using namespace std;

void solve()
{

    long long n, m;

    cin >> n >> m;

    cout << min(min(n, m), (n + m) / 4) << endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    int c;
    cin >> c;
    for(int i = 0; i < c; ++i)
        solve();

    return 0;
}
