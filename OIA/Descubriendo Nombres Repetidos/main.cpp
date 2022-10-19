#include <bits/stdc++.h>

using namespace std;

int main()
{

    /// mi metodo de mierda sin map
    /**
    int n;
    int cant;
    cin >> n >> cant;

    vector <string> names(n);

    for(int i = 0; i < n; ++i){
        cin >> names[i];
    }

    sort(names.begin(), names.end());

    vector <pair<int, string>> repetidos;

    int cont = 1;
    string name;
    for(int i = 0; i < n-1; ++i){
        if(names[i] != names[i+1]){
            repetidos.push_back({cont, names[i]});
            cont = 1;
        }else{
            cont++;
        }
    }

    sort(repetidos.rbegin(), repetidos.rend());

    for(int i = 0; i< cant; ++i){
        cout << repetidos[i].second << " " << repetidos[i].first << endl;

    }
    **/

    int c, n;
    cin >> c >> n;

    vector <string> v(c);
    for(int i = 0; i < c; ++i){
        cin >> v[i];
    }


    map <string, int> mapa;

    for(int i = 0; i < c; ++i){
        mapa[v[i]]++;
    }

    for(auto par:mapa){
        cout << par.first << " " << par.second << endl;
    }


    return 0;
}
