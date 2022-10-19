#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char a, b;
    string cadena;

    cin >> n;
    cin >> a >> b;
    cin >> cadena;

    for(int i = 0; i < cadena.size()-1; ++i){
        if(cadena[i] == a && cadena[i+1] == b && cadena[i+2] == a){
            cadena.erase(cadena.begin() + (i+1));
        }
    }

    cout << cadena.size() << endl << cadena;

    return 0;
}
