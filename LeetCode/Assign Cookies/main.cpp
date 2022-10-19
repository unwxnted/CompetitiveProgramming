#include <bits/stdc++.h>

using namespace std;

/**

4 4
1 2 3 4
1 1 3 4


**/


int findContentChildren(vector<int>& g, vector<int>& s) {

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int n = g.size();
    int m = s.size();
    int cont = 0;
    int k = 0;
    int i = 0;

    while(i < n && cont < m){
        if(s[cont] >= g[i]){
            k++;
            i++;
            cont++;
        }else{
            cont++;
        }
    }

    return k;

}

int main()
{
    int n, m;
    cin >> n >> m;;
    vector <int> g(n);
    vector <int> s(m);

    for(int i = 0; i < n; ++i)
        cin >> g[i];

    for(int i = 0; i < m; ++i)
        cin >> s[i];

    cout << findContentChildren(g, s);

    return 0;
}
