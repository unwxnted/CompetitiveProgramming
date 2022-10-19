#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    int cant;
    int aux;
    in >> cant;

    vector <int> bases;
    vector <int> libros;


    for(int i = 0; i < cant; ++i)
    {
        in >> aux;
        bases.push_back(aux);
    }

    for(int i = 0; i < cant; ++i){
        in >> aux;
        libros.push_back(aux);
    }

    sort(bases.begin(), bases.end());
    sort(libros.begin(), libros.end(), greater<>());

    int suma = 0;
    for(int i = 0; i < bases.size(); ++i){
        if(i == 0){
            suma = bases[i] + libros[i];
        }

        if(bases[i] + libros[i] != suma){
            out << "-1";
            return 0;
        }
    }

    out << suma;

    in.close();
    out.close();

    return 0;
}
