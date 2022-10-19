#include <bits/stdc++.h>

using namespace std;

/**

7 8
1 4
1 6
2 4
2 5
3 4
3 7
4 5
5 7

**/


vector <vector <int>> ady;
vector <bool> visit;

void DFS(int nodo)
{
    visit[nodo] = true;
    for(int i = 0; i < ady[nodo].size(); ++i){
        if(!visit[ady[nodo][i]]){
            cout << "visitando nodo " << ady[nodo][i] << endl;
            DFS(ady[nodo][i]);
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;
    ady.resize(n+1);

    visit = vector<bool> (n+1, false);

    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        ady[a].push_back(b);
        ady[b].push_back(a);

    }

    DFS(2);



    return 0;
}
