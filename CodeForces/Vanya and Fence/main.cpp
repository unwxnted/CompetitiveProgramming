#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int h;
    int k = 0;
    vector<int> v;
    cin >> n >> h;
    int aux;

    for(int i = 0; i < n; ++i){
        cin >> aux;
        v.push_back(aux);
        if(v[i] > h) k+=2;
        else k++;
    }

    cout << k << endl;
    return 0;
}
