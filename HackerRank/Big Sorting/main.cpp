#include <bits/stdc++.h>

using namespace std;

vector<string> bigSorting(vector<string> unsorted)
{
    sort(unsorted.begin(), unsorted.end(), [](const string& a, const string& b)
    {
        if (a.size() != b.size())
        {
            return a.size() < b.size();
        }
        return a < b;
    });

    return unsorted;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <string> unsorted(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> unsorted[i];
    }

    vector <string> sorted = bigSorting(unsorted);

    for(auto i : sorted)
    {
        cout << i << endl;
    }

    return 0;
}
