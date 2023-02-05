#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n, m, k, aux; /// m = arthur , k = alexander

    cin >> n >> m >> k;

    vector <int> ar(m);
    vector <int> al(k);

    for (int i = 0; i < m; ++i)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < k; ++i)
    {
        cin >> al[i];
    }

    vector <int> v(n, 2);

    for(int i = 0; i < m; ++i){
        v[ar[i]-1] = 1;
    }


    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    solve();
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
}