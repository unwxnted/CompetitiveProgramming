#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<double, double>> v;
    int a, b;
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());

    for(int i = 1; i < n; ++i){
        if(v[i].first > v[i-1].first && v[i].second < v[i-1].second) {cout << "Happy Alex" << endl;return 0;}
    }
    cout << "Poor Alex" << endl;
    return 0;
}
