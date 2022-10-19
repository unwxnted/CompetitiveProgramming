#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;

    vector <int> j;

    cin >> n >> k;

    int a;
    for(int i = 0; i < n; ++i){
        cin >> a;
        j.push_back(a);
    }

    j.push_back(k);

    sort(j.begin(), j.end());

    int diff = 0;

    for(int i = 0; i < j.size()-1; ++i){
        diff = diff + (j[i+1]-j[i]);
    }

    cout << diff;


    return 0;
}
