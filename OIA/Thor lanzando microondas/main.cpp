#include <bits/stdc++.h>

using namespace std;

/**

4 3 14
14 4
10 3
11 5
5 29
2
2
2

**/


int thor(vector <int> a, vector <int> f, vector <int> p, long long D){

    int distancia = 0;
    int cantidad = 0;

    for(int i = 0; i < a.size(); ++i){
        cantidad = p.size();
        while(cantidad-- > 0){
            if(((a[i] * f[i] )/p[cantidad]) >= D){
                distancia++;
            }

        }
    }

    return distancia;

}

int main()
{

    int n, m, d;
    cin >> n >> m >> d;

    vector <int> a(n);
    vector <int> f(n);
    vector <int> p(m);

    for(int i = 0; i <  n; ++i){
        cin >> a[i] >> f[i];
    }

    for(int i = 0; i < m; ++i){
        cin >> p[i];
    }

    cout << thor(a, f, p, d);

    return 0;
}
