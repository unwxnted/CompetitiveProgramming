#include <bits/stdc++.h>

using namespace std;

int main()
{

    fstream in("in.txt");
    fstream out("out.txt");

    int cant;
    int unoCount = 0;
    int onceCount = 0;
    string linea;
    string aux = "";
    in >> cant;

    for(int i = 0; i < cant; ++i)
    {

        in >> linea;
        onceCount = 0;
        unoCount = 0;
        aux = "";

        for(int j = 0; j < linea.size(); ++j)
        {
            aux = aux + linea[j];
            if(aux == "neo" || aux == "union" ||aux == "once")
            {
                aux = "";
                unoCount++;
            }
            if(aux == "eco" || aux == "clone" ||aux == "uno")
            {
                aux = "";
                onceCount++;
            }

            if(j == linea.size()-1 && aux == "")
            {
                out  << "SI " << unoCount << " " << onceCount << endl;
            }else if(j == linea.size()-1){
                out  << "NO" << endl;
            }

        }



    }

    in.close();
    out.close();


    return 0;
}
