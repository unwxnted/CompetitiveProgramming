#include <bits/stdc++.h>

using namespace std;

/**
1
5
1 1 3 3 4


**/

void solve()
{

    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> h;

    for(int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    for(int i = 0; i < n; ++i){
        for(int k = i+1; k < n; ++k){
            if(abs(v[i]-v[k]) <= 1){
                if(v[i] <= v[k]){
                    h.push_back(v[i]);
                }
                break;
            }
        }
    }

    if(v.size()-h.size() <= 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; ++i)
    {
        solve();
    }

    return 0;
}
