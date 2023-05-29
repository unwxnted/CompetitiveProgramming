#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    int i = a-1;
    int p1 = i-1;
    int p2 = i+1;
    int k = 0;
    if(v[i] == 1) k++;
    while(p1 >= 0 || p2 < n){
        if(p1 >= 0 && p2 < n && v[p1] == 1 && v[p2] == 1)k+=2;
        else if(p2 < n && v[p2] == 1 && p1 < 0)k++;
        else if(p1 >= 0 && v[p1] == 1 && p2 >= n)k++;
        p1--;
        p2++;
    }
    cout << k;
    return 0;
}
