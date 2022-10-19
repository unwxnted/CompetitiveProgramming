#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream in("in.txt");
    ofstream out("out.txt");

    int cantComida;
    int cantRecetas;
    int posibles = 0;

    in >> cantComida;
    in >> cantRecetas;

    vector <int> recetas;

    vector <string> comidas;

    vector <int> posiciones;


    string aux;
    for(int i = 0; i < cantComida; ++i)
    {
        in >> aux;
        comidas.push_back(aux);
    }

    for(int f = 0; f < comidas.size()-1; ++f)
    {
        for(int i =0; i < comidas.size() - f -1; ++i)
        {
            if(comidas[i] > comidas[i+1])
            {
                swap(comidas[i], comidas[i+1]);
            }
            else if(comidas[i] == comidas[i+1])
            {
                comidas[i].erase();
            }
        }

    }

    int cont = 0;
    int pos = 0;
    int p;
    vector <string> comidaReceta;
    for(int o = 0; o < cantRecetas; ++o)
    {
        in >> p;

        for(int j = 0; j < p; ++j) // inserto las comidas
        {
            in >> aux;
            comidaReceta.push_back(aux);

        }

        for(int f = 0; f < comidaReceta.size()-1; ++f) // las ordeno y las descarto
        {
            for(int i =0; i < comidaReceta.size() - f -1; ++i)
            {
                if(comidaReceta[i] > comidaReceta[i+1])
                {
                    swap(comidaReceta[i], comidaReceta[i+1]);
                }
                else if(comidaReceta[i] == comidaReceta[i+1])
                {
                    comidaReceta[i].erase();
                }
            }

        }


        cont = 0;
        pos++;
        for(int k = 0; k < comidaReceta.size(); ++k)
        {
            for(int i = 0; i< comidas.size(); ++i )
            {
                if(comidaReceta[k] == comidas[i])
                {
                    //cout << "equal" << endl;
                    cont++;
                    break;
                }

            }

        }

        if(cont == comidaReceta.size())
        {
            posibles++;
            posiciones.push_back(pos);
        }


        for(int i =0; i < comidaReceta.size(); ++i){
            comidaReceta[i].erase();
        }

    }

    out << posibles << endl;
    for(int i = 0; i < posiciones.size(); ++i){
        out << posiciones[i] << " ";
    }

    in.close();
    out.close();


    return 0;
}
