#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int k = 1;
    int m = 1;
    int p;

    for (int i = 0; i < n; ++i)
    {
        p = i-1;
        k = 1;

        while (p >= 0 && v[p] <= v[p+1])
        {
            k++;
            p--;
        }

        p = i+1;

        while (p < n && v[p] <= v[p-1])
        {
            k++;
            p++;
        }

        m = max(k, m);
    }

    cout << m << endl;

    return 0;
}
