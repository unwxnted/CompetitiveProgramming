#include <bits/stdc++.h>

using namespace std;

vector <vector <int>> ady;
vector <bool> visit;

void DFS(int nodo)
{
    visit[nodo] = true;

    for(int i = 0; i < ady[nodo].size(); ++i){
        if(!visit[ady[nodo][i]]){
            DFS(ady[nodo][i]);
        }
    }

}

int main()
{
    int n, m;
    cin >> n >> m;

    ady.resize(n+1);
    visit = vector <bool> (n+1, false);

    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        ady[a].push_back(b);
        ady[b].push_back(a);
    }

    int grupos = 0;
    vector <int> ciudades;
    for(int i = 1; i <= n; ++i){
        if(!visit[i]){
            grupos++;
            ciudades.push_back(i);
            DFS(i);
        }
    }

    cout << grupos-1 << endl;
    for(int i = 1; i < ciudades.size(); ++i){
        cout << ciudades[i-1] << " " << ciudades[i] << endl;
    }
    return 0;
}
